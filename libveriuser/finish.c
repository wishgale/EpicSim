/* Copyright (c) 2020 XEPIC Corporation Limited */
/*
 * Copyright (c) 2002 Stephen Williams (steve@icarus.com)
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

#include <veriuser.h>
#include <vpi_user.h>

/*
 * Implement tf_dofinish and tf_dostop using vpi functions.
 */
int tf_dofinish(void) {
  vpi_control(vpiFinish, 0);
  return 0;
}

int tf_dostop(void) {
  vpi_control(vpiStop, 0);
  return 0;
}
