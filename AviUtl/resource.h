/*****************************************************************************
 * resource.h
 *****************************************************************************
 * Copyright (C) 2012-2013 L-SMASH Works project
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

#ifndef IDC_STATIC
#define IDC_STATIC (-1)
#endif

/* Progress dialog */
#define IDD_PROGRESS_ABORTABLE         101
#define IDD_PROGRESS_UNABORTABLE       102
#define IDC_PERCENT_TEXT              1000
#define IDC_PROGRESS                  1001

/* Reader dialog */
#define IDC_EDIT_THREADS              1100
#define IDC_SPIN_THREADS              1101
#define IDC_EDIT_FORWARD_THRESHOLD    1102
#define IDC_SPIN_FORWARD_THRESHOLD    1103
#define IDC_CHECK_LIBAVSMASH_INPUT    1104
#define IDC_CHECK_AVS_INPUT           1105
#define IDC_CHECK_LIBAV_INPUT         1106
#define IDC_COMBOBOX_SEEK_MODE        1107
#define IDC_EDIT_DUMMY_WIDTH          1108
#define IDC_EDIT_DUMMY_HEIGHT         1109
#define IDC_EDIT_DUMMY_FRAMERATE_NUM  1110
#define IDC_EDIT_DUMMY_FRAMERATE_DEN  1111
#define IDC_EDIT_AUDIO_DELAY          1112
#define IDC_COMBOBOX_DUMMY_COLORSPACE 1113
#define IDC_COMBOBOX_SCALER           1114
#define IDC_CHECK_FORCE_VIDEO         1115
#define IDC_EDIT_FORCE_VIDEO_INDEX    1116
#define IDC_CHECK_FORCE_AUDIO         1117
#define IDC_EDIT_FORCE_AUDIO_INDEX    1118
#define IDC_CHECK_CREATE_INDEX_FILE   1119
#define IDC_CHECK_AV_SYNC             1120
#define IDC_EDIT_CHANNEL_LAYOUT       1121
#define IDC_SLIDER_MIX_LEVEL_CENTER   1122
#define IDC_SLIDER_MIX_LEVEL_SURROUND 1123
#define IDC_SLIDER_MIX_LEVEL_LFE      1124
#define IDC_TEXT_MIX_LEVEL_CENTER     1125
#define IDC_TEXT_MIX_LEVEL_SURROUND   1126
#define IDC_TEXT_MIX_LEVEL_LFE        1127
#define IDC_EDIT_SAMPLE_RATE          1128
#define IDC_CHECK_APPLY_REPEAT_FLAG   1129
#define IDC_COMBOBOX_FIELD_DOMINANCE  1130
#define IDC_TEXT_LIBRARY_INFO         1131
#define IDC_CHECK_LW48_OUTPUT         1132

/* Muxer dialog */
#define IDD_MUXER_OPTIONS              103
#define IDC_BUTTON_OPTION_DEFAULT     1200
#define IDC_BUTTON_CHAPTER_BROWSE     1201
#define IDC_EDIT_CHAPTER_PATH         1202
#define IDC_CHECK_OPTIMIZE_PD         1203
