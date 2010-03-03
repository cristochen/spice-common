/* -*- Mode: C; c-basic-offset: 4; indent-tabs-mode: nil -*- */
/*
   Copyright (C) 2009 Red Hat, Inc.

   This program is free software; you can redistribute it and/or
   modify it under the terms of the GNU General Public License as
   published by the Free Software Foundation; either version 2 of
   the License, or (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "glc.h"
#include <spice/draw.h>
#include "canvas_base.h"
#include "region.h"

SpiceCanvas *gl_canvas_create(int width, int height, int depth
#ifdef CAIRO_CANVAS_CACHE
                           , SpiceImageCache *bits_cache
                           , SpicePaletteCache *palette_cache
#elif defined(CAIRO_CANVAS_IMAGE_CACHE)
                           , SpiceImageCache *bits_cache
#endif
                           , SpiceGlzDecoder *glz_decoder
#ifndef CAIRO_CANVAS_NO_CHUNKS
                            , SpiceVirtMapping *virt_mapping
#endif
                           );
void gl_canvas_set_textures_lost(SpiceCanvas *canvas, int textures_lost);
void gl_canvas_init();

