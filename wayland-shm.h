/* wld: wayland-shm.h
 *
 * Copyright (c) 2013 Michael Forney
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#ifndef WLD_WAYLAND_SHM_H
#define WLD_WAYLAND_SHM_H

#include <stdbool.h>
#include <stdint.h>

struct wl_display;
struct wl_event_queue;

/**
 * Create a new drawable context which creates Wayland buffers through the
 * wl_shm interface, back by Pixman drawables.
 */
struct wld_context * wld_shm_create_context(struct wl_display * display,
                                            struct wl_event_queue * queue);

/**
 * Check if the wl_shm global has the specified pixel format.
 *
 * @see enum wld_format
 */
bool wld_shm_has_format(struct wld_context * context, uint32_t format);

#endif

