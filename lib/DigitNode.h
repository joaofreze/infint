/**
 *
 *  @file    DigitNode.h
 *  @struct  DigitNode
 *  @version 1.0
 *  @since   02/22/2016
 *  @author  João Carlos Fréze Sthorc <joao.freze@hotmail.com>
 *  @brief   It is a record type made to manipulate digits through
 *           a double ended queue.
 *
 */
#ifndef DIGITNODE
#define DIGITNODE
#include "Digit.h"

struct DigitNode
    {
        enum Digit digit;
        struct DigitNode *previous;
        struct DigitNode *next;
    };

#endif
