/* classes: h_files */

#ifndef SCM_ARRAY_MAP_H
#define SCM_ARRAY_MAP_H

/* Copyright (C) 1995, 1996, 1997, 2000, 2006, 2008, 2009, 2010,
 *   2011, 2013, 2015 Free Software Foundation, Inc.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public License
 * as published by the Free Software Foundation; either version 3 of
 * the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
 * 02110-1301 USA
 */



#include "libguile/__scm.h"



SCM_API int scm_ra_matchp (SCM ra0, SCM ras);
SCM_API int scm_ramapc (void *cproc, SCM data, SCM ra0, SCM lra,
			const char *what);
SCM_API SCM scm_array_fill_x (SCM ra, SCM fill);
SCM_API SCM scm_array_copy_x (SCM src, SCM dst);
SCM_API SCM scm_array_map_x (SCM ra0, SCM proc, SCM lra);
SCM_API SCM scm_array_for_each (SCM proc, SCM ra0, SCM lra);
SCM_API SCM scm_array_index_map_x (SCM ra, SCM proc);
SCM_API SCM scm_array_equal_p (SCM ra0, SCM ra1);
SCM_API SCM scm_array_slice_for_each (SCM frank, SCM op, SCM args);
SCM_API SCM scm_array_slice_for_each_in_order (SCM frank, SCM op, SCM args);

SCM_INTERNAL SCM scm_i_array_rebase (SCM a, size_t base);
SCM_INTERNAL void scm_init_array_map (void);

#endif  /* SCM_ARRAY_MAP_H */

/*
  Local Variables:
  c-file-style: "gnu"
  End:
*/
