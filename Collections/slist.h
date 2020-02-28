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
*                               uC/Common - Singly-linked Lists (SList)
*
* Filename : slist.h
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

#ifndef  COLL_SLIST_MODULE_PRESENT                              /* See Note #1.                                         */
#define  COLL_SLIST_MODULE_PRESENT


/*
*********************************************************************************************************
*********************************************************************************************************
*                                            INCLUDE FILES
*********************************************************************************************************
*********************************************************************************************************
*/

#include  <cpu.h>


/*
*********************************************************************************************************
*********************************************************************************************************
*                                             DATA TYPES
*********************************************************************************************************
*********************************************************************************************************
*/

typedef  struct  slist_member  SLIST_MEMBER;

struct  slist_member {
    SLIST_MEMBER  *p_next;
};


/*
*********************************************************************************************************
*********************************************************************************************************
*                                              MACROS
*********************************************************************************************************
*********************************************************************************************************
*/


#define  OFFSET_OF(type, member)                      ((CPU_SIZE_T)&(((type *)0)->member))
#define  CONTAINER_OF(p_member, parent_type, member)  (parent_type *)((CPU_ADDR)(p_member) - ((CPU_ADDR)(&((parent_type *)0)->member)))

#define  SLIST_FOR_EACH(list_head, iterator)          for ((iterator) = (list_head); (iterator) != DEF_NULL; (iterator) = (iterator)->p_next)

#define  SLIST_FOR_EACH_ENTRY(list_head, entry, type, member) for (  (entry) = SLIST_ENTRY(list_head, type, member); \
                                                                   &((entry)->member.p_next) != DEF_NULL; \
                                                                     (entry) = SLIST_ENTRY((entry)->member.p_next, type, member))

#define  SLIST_ENTRY                                  CONTAINER_OF


/*
*********************************************************************************************************
*********************************************************************************************************
*                                         FUNCTION PROTOTYPES
*********************************************************************************************************
*********************************************************************************************************
*/


void           SList_Init     (SLIST_MEMBER  **p_head_ptr);

void           SList_Push     (SLIST_MEMBER  **p_head_ptr,
                               SLIST_MEMBER   *p_item);

void           SList_PushBack (SLIST_MEMBER  **p_head_ptr,
                               SLIST_MEMBER   *p_item);

SLIST_MEMBER  *SList_Pop      (SLIST_MEMBER  **p_head_ptr);

void           SList_Add      (SLIST_MEMBER   *p_item,
                               SLIST_MEMBER   *p_pos);

void           SList_Rem      (SLIST_MEMBER  **p_head_ptr,
                               SLIST_MEMBER   *p_item);

void           SList_Sort     (SLIST_MEMBER  **p_head_ptr,
                               CPU_BOOLEAN   (*cmp_fnct)(SLIST_MEMBER  *p_item_l, SLIST_MEMBER  *p_item_r));

#endif /* COLL_SLIST_MODULE_PRESENT */
