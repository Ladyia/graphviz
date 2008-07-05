/* $Id$ $Revision$ */
/* vim:set shiftwidth=4 ts=8: */

/**********************************************************
*      This software is part of the graphviz package      *
*                http://www.graphviz.org/                 *
*                                                         *
*            Copyright (c) 1994-2004 AT&T Corp.           *
*                and is licensed under the                *
*            Common Public License, Version 1.0           *
*                      by AT&T Corp.                      *
*                                                         *
*        Information and Software Systems Research        *
*              AT&T Research, Florham Park NJ             *
**********************************************************/

#ifndef GVPLUGIN_GDIPLUS_H
#define GVPLUGIN_GDIPLUS_H

#include <Windows.h>
#include <GdiPlus.h>

typedef enum {
	FORMAT_NONE,
	FORMAT_BMP,
	FORMAT_EMF,
	FORMAT_EMFPLUS,
	FORMAT_GIF,
	FORMAT_JPEG,
	FORMAT_PNG,
	FORMAT_TIFF
} format_type;

struct GraphicsContext
{
	ULONG_PTR token;
	
	GraphicsContext();
	~GraphicsContext();
};

static const int BYTES_PER_PIXEL = 4;		/* bytes per pixel */

extern void SaveBitmapToStream(Gdiplus::Bitmap &bitmap, IStream *stream, int format);

#endif
