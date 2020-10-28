/* Copyright (c) 2020 XEPIC Corporation Limited */
/*
 * Copyright (c) 2003 Stephen Williams (steve@picturel.com)
 *
 *    This source code is free software; you can redistribute it
 *    and/or modify it in source code form under the terms of the GNU
 *    General Public License as published by the Free Software
 *    Foundation; either version 2 of the License, or (at your option)
 *    any later version.
 *
 *    This program is distributed in the hope that it will be useful,
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *    GNU General Public License for more details.
 *
 *    You should have received a copy of the GNU General Public License
 *    along with this program; if not, write to the Free Software
 *    Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301,
 * USA.
 */

#include <acc_user.h>
#include <assert.h>
#include <ctype.h>
#include <vpi_user.h>

#include "priv.h"

handle acc_handle_simulated_net(handle obj) {
  if (pli_trace) {
    fprintf(pli_trace, "acc_handle_simulated_set: returns argument\n");
    fflush(pli_trace);
  }

  return obj;
}
