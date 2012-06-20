/*!The Treasure Box Library
 * 
 * TBox is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation; either version 2.1 of the License, or
 * (at your option) any later version.
 * 
 * TBox is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public License
 * along with TBox; 
 * If not, see <a href="http://www.gnu.org/licenses/"> http://www.gnu.org/licenses/</a>
 * 
 * Copyright (C) 2009 - 2012, ruki All rights reserved.
 *
 * @author		ruki
 * @file		math.h
 * @ingroup 	libm
 *
 */
#ifndef TB_LIBM_MATH_H
#define TB_LIBM_MATH_H

/* ///////////////////////////////////////////////////////////////////////
 * includes
 */
#include "prefix.h"
#include "nan.h"
#include "inf.h"
#include "maf.h"
#include "mif.h"
#include "pi.h"
#include "fabs.h"
#include "round.h"
#include "ceil.h"
#include "floor.h"

/* ///////////////////////////////////////////////////////////////////////
 * interfaces
 */

// isinf
tb_long_t tb_isinf(tb_double_t x);
tb_long_t tb_isinff(tb_float_t x);

// isnan
tb_long_t tb_isnan(tb_double_t x);
tb_long_t tb_isnanf(tb_float_t x);

#endif