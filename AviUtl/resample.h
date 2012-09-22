/*****************************************************************************
 * resample.h
 *****************************************************************************
 * Copyright (C) 2012 L-SMASH Works project
 *
 * Authors: Yusuke Nakamura <muken.the.vfrmaniac@gmail.com>
 *
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 *****************************************************************************/

/* This file is available under an ISC license.
 * However, when distributing its binary file, it will be under LGPL or GPL.
 * Don't distribute it if its license is GPL. */

typedef struct
{
    int                 channel_layout;
    int                 sample_count;
    enum AVSampleFormat sample_format;
    uint8_t           **data;
} audio_samples_t;

static inline enum AVSampleFormat decide_audio_output_sample_format( enum AVSampleFormat input_sample_format )
{
    /* AviUtl doesn't support IEEE floating point format. */
    switch ( input_sample_format )
    {
        case AV_SAMPLE_FMT_U8 :
        case AV_SAMPLE_FMT_U8P :
            return AV_SAMPLE_FMT_U8;
        case AV_SAMPLE_FMT_S32 :
        case AV_SAMPLE_FMT_S32P :
            return AV_SAMPLE_FMT_S32;
        default :
            return AV_SAMPLE_FMT_S16;
    }
}

static inline void put_silence_audio_samples( int silence_data_size, uint8_t **out_data )
{
    memset( *out_data, 0, silence_data_size );
    *out_data += silence_data_size;
}

static inline int get_channel_layout_nb_channels( uint64_t channel_layout )
{
    int channels = av_get_channel_layout_nb_channels( channel_layout );
    if( channels <= 0 )
        channels = 1;
    return channels;
}

static inline int get_linesize( int channel_count, int sample_count, enum AVSampleFormat sample_format )
{
    int linesize;
    av_samples_get_buffer_size( &linesize, channel_count, sample_count, sample_format, 0 );
    return linesize;
}

static inline void resample_s32_to_s24( uint8_t **out_data, uint8_t *in_data, int data_size )
{
    /* Assume little endianess here.
     *   in[0b00]  in[0b01]  in[0b10]  in[0b11]  in[0b100]  in[0b101]  in[0b110]  in[0b111] ...
     *       X    out[0b00] out[0b01] out[0b10]      X     out[0b11]  out[0b100] out[0b101] ... */
    for( int i = 0; i < data_size; i++ )
        if( i & 0x3 )
            *(*out_data++) = in_data[i];
}

int resample_audio( AVAudioResampleContext *avr, audio_samples_t *out, audio_samples_t *in );