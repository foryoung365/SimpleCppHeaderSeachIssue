#pragma once

#include "same_name.h"

#define SOME_MUL(a, b) ((a) * (b))

inline int NotImportantFunc(void* p) {
    CHECKF(p!= nullptr);
    
    return 0;
}