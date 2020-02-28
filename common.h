/*
*********************************************************************************************************
*                                              uC/Common
*                                 Common Features for Micrium Stacks
*
*                    Copyright 2013-2020 Silicon Laboratories Inc. www.silabs.com
*
*                                 SPDX-License-Identifier: APACHE-2.0
*
*               This software is subject to an open source license and is distributed by
*                Silicon Laboratories Inc. pursuant to the terms of the Apache License,
*                    Version 2.0 available at www.apache.org/licenses/LICENSE-2.0.
*
*********************************************************************************************************
*/

/*
*********************************************************************************************************
*
*                                   uC/Common - Common Definitions
*
* Filename : common.h
* Version  : V1.02.00
*********************************************************************************************************
*/

/*
*********************************************************************************************************
*********************************************************************************************************
*                                               MODULE
*
* Note(s) : (1) This library header file is protected from multiple pre-processor inclusion through
*               use of the library module present pre-processor macro definition.
*********************************************************************************************************
*********************************************************************************************************
*/

#ifndef  COMMON_MODULE_PRESENT                                  /* See Note #1.                                         */
#define  COMMON_MODULE_PRESENT


/*
*********************************************************************************************************
*********************************************************************************************************
*                                                DEFINES
*********************************************************************************************************
*********************************************************************************************************
*/

/*
*********************************************************************************************************
*                                     COMMON MODULE VERSION NUMBER
*
* Note(s) : (1) (a) The common module software version is denoted as follows :
*
*                       Vx.yy.zz
*
*                           where
*                                   V               denotes 'Version' label
*                                   x               denotes     major software version revision number
*                                   yy              denotes     minor software version revision number
*                                   zz              denotes sub-minor software version revision number
*
*               (b) The software version label #define is formatted as follows :
*
*                       ver = x.yyzz * 100 * 100
*
*                           where
*                                   ver             denotes software version number scaled as an integer value
*                                   x.yyzz          denotes software version number, where the unscaled integer
*                                                       portion denotes the major version number & the unscaled
*                                                       fractional portion denotes the (concatenated) minor
*                                                       version numbers
*********************************************************************************************************
*/

#define  COMMON_VERSION                                10200u   /* See Note #1.                                         */


#endif /* COMMON_MODULE_PRESENT */

