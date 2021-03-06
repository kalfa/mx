/* -*- mode: C; c-file-style: "gnu"; indent-tabs-mode: nil; -*- */
/*
 * mx-progress-bar.h: Progress bar widget
 *
 * Copyright 2009 Intel Corporation.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU Lesser General Public License,
 * version 2.1, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope it will be useful, but WITHOUT ANY
 * WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public License for
 * more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin St - Fifth Floor, Boston, MA 02110-1301 USA.
 *
 * Written by: Chris Lord <chris@linux.intel.com>
 *
 */

#if !defined(MX_H_INSIDE) && !defined(MX_COMPILATION)
#error "Only <mx/mx.h> can be included directly.h"
#endif

#ifndef _MX_PROGRESS_BAR_H
#define _MX_PROGRESS_BAR_H

#include <glib-object.h>
#include <mx/mx-widget.h>

G_BEGIN_DECLS

#define MX_TYPE_PROGRESS_BAR mx_progress_bar_get_type()

#define MX_PROGRESS_BAR(obj) \
  (G_TYPE_CHECK_INSTANCE_CAST ((obj), \
  MX_TYPE_PROGRESS_BAR, MxProgressBar))

#define MX_PROGRESS_BAR_CLASS(klass) \
  (G_TYPE_CHECK_CLASS_CAST ((klass), \
  MX_TYPE_PROGRESS_BAR, MxProgressBarClass))

#define MX_IS_PROGRESS_BAR(obj) \
  (G_TYPE_CHECK_INSTANCE_TYPE ((obj), \
  MX_TYPE_PROGRESS_BAR))

#define MX_IS_PROGRESS_BAR_CLASS(klass) \
  (G_TYPE_CHECK_CLASS_TYPE ((klass), \
  MX_TYPE_PROGRESS_BAR))

#define MX_PROGRESS_BAR_GET_CLASS(obj) \
  (G_TYPE_INSTANCE_GET_CLASS ((obj), \
  MX_TYPE_PROGRESS_BAR, MxProgressBarClass))

typedef struct _MxProgressBar MxProgressBar;
typedef struct _MxProgressBarClass MxProgressBarClass;
typedef struct _MxProgressBarPrivate MxProgressBarPrivate;

/**
 * MxProgressBar:
 *
 * The contents of this structure are private and should only be
 * accessed through the public API.
 */
struct _MxProgressBar
{
  /*< private >*/
  MxWidget parent;

  MxProgressBarPrivate *priv;
};

struct _MxProgressBarClass
{
  MxWidgetClass parent_class;

  /* padding for future expansion */
  void (*_padding_0) (void);
  void (*_padding_1) (void);
  void (*_padding_2) (void);
  void (*_padding_3) (void);
  void (*_padding_4) (void);
};

GType mx_progress_bar_get_type (void);

ClutterActor *mx_progress_bar_new (void);

void          mx_progress_bar_set_progress (MxProgressBar *bar,
                                            gdouble        progress);
gdouble       mx_progress_bar_get_progress (MxProgressBar *bar);

G_END_DECLS

#endif /* _MX_PROGRESS_BAR_H */
