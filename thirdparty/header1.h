#pragma once
#include "same_name.h"

#define SOME_SUB(a, b) ((a) - (b))

inline int doAdd(int a, int b)
{
    return SOME_ADD(a, b);
}