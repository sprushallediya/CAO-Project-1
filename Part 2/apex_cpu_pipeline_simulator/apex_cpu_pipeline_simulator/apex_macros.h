/*
 * apex_macros.h
 * Contains APEX cpu pipeline macros
 *
 * Author:
 * Copyright (c) 2020, Gaurav Kothari (gkothar1@binghamton.edu)
 * State University of New York at Binghamton
 */
#ifndef _MACROS_H_
#define _MACROS_H_

#define FALSE 0x0
#define TRUE 0x1

/* Integers */
#define DATA_MEMORY_SIZE 4096

/* Size of integer register file */
#define REG_FILE_SIZE 16

/* Numeric OPCODE identifiers for instructions */
#define OPCODE_ADD     0x0
#define OPCODE_SUB     0x1
#define OPCODE_MUL     0x2
#define OPCODE_DIV     0x3
#define OPCODE_AND     0x4
#define OPCODE_OR      0x5
#define OPCODE_XOR     0x6
#define OPCODE_MOVC    0x7
#define OPCODE_LOAD    0x8
#define OPCODE_STORE   0x9
#define OPCODE_BZ      0xa
#define OPCODE_BNZ     0xb
#define OPCODE_JUMP    0xc
#define OPCODE_BAL     0xd
#define OPCODE_MOV     0xe
#define OPCODE_HALT    0xf

/* Set this flag to 1 to enable debug messages */
#define ENABLE_DEBUG_MESSAGES 1

/* Set this flag to 1 to enable cycle single-step mode */
#define ENABLE_SINGLE_STEP 0

#endif
