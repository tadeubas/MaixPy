/*
 * This file is part of the OpenMV project.
 * Copyright (c) 2013/2014 Ibrahim Abdelkader <i.abdalkader@gmail.com>
 * This work is licensed under the MIT license, see the file LICENSE for details.
 *
 * Image library configuration.
 *
 */
#ifndef __IMLIB_CONFIG_H__
#define __IMLIB_CONFIG_H__

#include "py/mpconfig.h"
#include "global_config.h"

#if CONFIG_MAIXPY_OMV_MINIMUM

#ifndef CONFIG_MAIXPY_OMV_CONV_YUV_FAST
    #define IMLIB_ENABLE_YUV_LAB_FUNC
#endif

#if CONFIG_MAIXPY_OMV_BINARY_OPS
    #define IMLIB_ENABLE_BINARY_OPS
#endif

#if CONFIG_MAIXPY_OMV_MATH_OPS
    #define IMLIB_ENABLE_MATH_OPS
#endif

#if CONFIG_MAIXPY_OMV_MEDIAN
    #define IMLIB_ENABLE_MEDIAN
#endif

#if CONFIG_MAIXPY_OMV_QRCODES
    #define IMLIB_ENABLE_QRCODES
#endif

#define OMV_MINIMUM

/////////////////////////////////////////////////////////////////////////
#else //CONFIG_MAIXPY_OMV_MINIMUM
/////////////////////////////////////////////////////////////////////////


// Enable binary ops
#if CONFIG_MAIXPY_OMV_BINARY_OPS
    #define IMLIB_ENABLE_BINARY_OPS
#endif

// Enable math ops
#if CONFIG_MAIXPY_OMV_MATH_OPS
    #define IMLIB_ENABLE_MATH_OPS
#endif

// Enable flood_fill()
#define IMLIB_ENABLE_FLOOD_FILL

// Enable mean()
#define IMLIB_ENABLE_MEAN

// Enable median()
#if CONFIG_MAIXPY_OMV_MEDIAN
    #define IMLIB_ENABLE_MEDIAN
#endif

// Enable mode()
#define IMLIB_ENABLE_MODE

// Enable midpoint()
#define IMLIB_ENABLE_MIDPOINT

// Enable morph()
#define IMLIB_ENABLE_MORPH

// Enable Gaussian
#define IMLIB_ENABLE_GAUSSIAN

// Enable Laplacian
#define IMLIB_ENABLE_LAPLACIAN

// Enable bilateral()
#define IMLIB_ENABLE_BILATERAL

// Enable cartoon()
#define IMLIB_ENABLE_CARTOON

// Enable remove_shadows()
#define IMLIB_ENABLE_REMOVE_SHADOWS

// Enable linpolar()
#define IMLIB_ENABLE_LINPOLAR

// Enable logpolar()
#define IMLIB_ENABLE_LOGPOLAR

// Enable chrominvar()
#define IMLIB_ENABLE_CHROMINVAR

// Enable illuminvar()
#define IMLIB_ENABLE_ILLUMINVAR

// Enable invariant table
//#define IMLIB_ENABLE_INVARIANT_TABLE

// Enable rotation_corr()
#define IMLIB_ENABLE_ROTATION_CORR

// Enable phasecorrelate()
#define IMLIB_ENABLE_FIND_DISPLACEMENT

// rotation_corr() is required by phasecorrelate()
#if defined(IMLIB_ENABLE_FIND_DISPLACEMENT)\
    && !defined(IMLIB_ENABLE_ROTATION_CORR)
    #define IMLIB_ENABLE_ROTATION_CORR
#endif

// Enable get_similarity()
#define IMLIB_ENABLE_GET_SIMILARITY

// Enable find_lines()
#define IMLIB_ENABLE_FIND_LINES

// Enable find_line_segments()
#define IMLIB_ENABLE_FIND_LINE_SEGMENTS

// find_lines() is required by the old find_line_segments()
#if defined(IMLIB_ENABLE_FIND_LINE_SEGMENTS)\
    && !defined(IMLIB_ENABLE_FIND_LINES)
    #define IMLIB_ENABLE_FIND_LINES
#endif

// Enable find_circles()
#define IMLIB_ENABLE_FIND_CIRCLES

// Enable find_rects()
#define IMLIB_ENABLE_FIND_RECTS

// Enable find_qrcodes() (14 KB)
#if CONFIG_MAIXPY_OMV_QRCODES
    #define IMLIB_ENABLE_QRCODES
#endif

// Enable find_apriltags() (64 KB)
#define IMLIB_ENABLE_APRILTAGS

// Enable find_datamatrices() (26 KB)
#define IMLIB_ENABLE_DATAMATRICES

// Enable find_barcodes() (42 KB)
#define IMLIB_ENABLE_BARCODES

// Enable LENET (200+ KB).
#define IMLIB_ENABLE_LENET

// Enable CMSIS NN
#define IMLIB_ENABLE_CNN

// Enable FAST (20+ KBs).
#define IMLIB_ENABLE_FAST

// Enable find_hog()
#define IMLIB_ENABLE_HOG

// Enable selective_search()
#define IMLIB_ENABLE_SELECTIVE_SEARCH

#ifndef CONFIG_MAIXPY_OMV_CONV_YUV_FAST
    #define IMLIB_ENABLE_YUV_LAB_FUNC
#endif

#endif //CONFIG_MAIXPY_OMV_MINIMUM

#endif //__IMLIB_CONFIG_H__
