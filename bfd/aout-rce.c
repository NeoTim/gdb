/* BFD back-end for RCE a.out binaries.
   Copyright 1990, 1991, 1992 Free Software Foundation, Inc.

This file is part of BFD, the Binary File Descriptor library.

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.  */

#define TARGET_IS_BIG_ENDIAN_P
#define PAGE_SIZE 4096
#define SEGMENT_SIZE 4096
#define TEXT_START_ADDR	0x0
/* #define N_HEADER_IN_TEXT(x) 0 */
#define N_SHARED_LIB(x) 0
#define ARCH 32
#define BYTES_IN_WORD 4
#include "bfd.h"
#include "sysdep.h"
#include "libbfd.h"
#include "aout/aout64.h"
#include "aout/stab_gnu.h"
#include "aout/ar.h"
#include "libaout.h"
#define DEFAULT_ARCH bfd_arch_rce
#define MY(OP) CAT(rce_aout_,OP)
#define TARGETNAME "a.out-rce"
#include "aout-target.h"
