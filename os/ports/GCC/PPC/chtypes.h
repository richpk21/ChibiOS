/*
    ChibiOS/RT - Copyright (C) 2006,2007,2008,2009,2010 Giovanni Di Sirio.

    This file is part of ChibiOS/RT.

    ChibiOS/RT is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 3 of the License, or
    (at your option) any later version.

    ChibiOS/RT is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program. If not, see <http://www.gnu.org/licenses/>.

                                      ---

    A special exception to the GPL can be applied should you wish to distribute
    a combined work that includes ChibiOS/RT, without being obliged to provide
    the source code for any proprietary components. See the file exception.txt
    for full details of how and when the exception can be applied.
*/

/**
 * @file    PPC/chtypes.h
 * @brief   PowerPC architecture port system types.
 *
 * @addtogroup PPC_CORE
 * @{
 */

#ifndef _CHTYPES_H_
#define _CHTYPES_H_

#define __need_NULL
#define __need_size_t
#include <stddef.h>

#if !defined(_STDINT_H) && !defined(__STDINT_H_)
#include <stdint.h>
#endif

/*
 * Derived generic types.
 */
typedef volatile int8_t     vint8_t;        /**< Volatile signed 8 bits.    */
typedef volatile uint8_t    vuint8_t;       /**< Volatile unsigned 8 bits.  */
typedef volatile int16_t    vint16_t;       /**< Volatile signed 16 bits.   */
typedef volatile uint16_t   vuint16_t;      /**< Volatile unsigned 16 bits. */
typedef volatile int32_t    vint32_t;       /**< Volatile signed 32 bits.   */
typedef volatile uint32_t   vuint32_t;      /**< Volatile unsigned 32 bits. */

/*
 * Kernel types.
 */
typedef int32_t             bool_t;         /**< Fast boolean type.         */
typedef uint8_t             tmode_t;        /**< Thread flags.              */
typedef uint8_t             tstate_t;       /**< Thread state.              */
typedef uint8_t             trefs_t;        /**< Thread references counter. */
typedef uint32_t            tprio_t;        /**< Thread priority.           */
typedef int32_t             msg_t;          /**< Inter-thread message.      */
typedef int32_t             eventid_t;      /**< Event Id.                  */
typedef uint32_t            eventmask_t;    /**< Events mask.               */
typedef uint32_t            systime_t;      /**< System time.               */
typedef int32_t             cnt_t;          /**< Resources counter.         */

/**
 * @brief   Inline function modifier.
 */
#define INLINE inline

/**
 * @brief   ROM constant modifier.
 * @note    It is set to use the "const" keyword in this port.
 */
#define ROMCONST const

/**
 * @brief   Packed structure modifier (within).
 * @note    It uses the "packed" GCC attribute.
 */
#define PACK_STRUCT_STRUCT __attribute__((packed))

/**
 * @brief   Packed structure modifier (before).
 * @note    Empty in this port.
 */
#define PACK_STRUCT_BEGIN

/**
 * @brief   Packed structure modifier (after).
 * @note    Empty in this port.
 */
#define PACK_STRUCT_END

#endif /* _CHTYPES_H_ */

/** @} */
