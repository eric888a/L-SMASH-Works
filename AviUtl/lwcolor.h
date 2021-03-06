/*****************************************************************************
 * lwcoler.h
 *****************************************************************************
 * Copyright (C) 2011-2013 L-SMASH Works project
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

/* This file is available under an ISC license. */

#define YUY2_SIZE  2
#define RGB24_SIZE 3
#define RGBA_SIZE  4
#define YC48_SIZE  6
#define LW48_SIZE  6

/* Packed YUV 16:16:16, 48bpp 16Y 16Cb 16Cr,
 * the 2-byte value for each Y/Cb/Cr component is stored as little-endian */
typedef	struct
{
    short y;
    short cb;
    short cr;
} PIXEL_LW48;

typedef enum
{
    OUTPUT_YUY2  = 0,
    OUTPUT_RGB24 = 1,
    OUTPUT_RGBA  = 2,
    OUTPUT_YC48  = 3,
    OUTPUT_LW48  = 4,
} output_colorspace_index;

typedef enum
{
    OUTPUT_TAG_YUY2 = MAKEFOURCC( 'Y', 'U', 'Y', '2' ),
    OUTPUT_TAG_RGB  = 0x00000000,
    OUTPUT_TAG_RGBA = 0x00000000,
    OUTPUT_TAG_YC48 = MAKEFOURCC( 'Y', 'C', '4', '8' ),
    OUTPUT_TAG_LW48 = MAKEFOURCC( 'L', 'W', '4', '8' ),
} output_colorspace_tag;
