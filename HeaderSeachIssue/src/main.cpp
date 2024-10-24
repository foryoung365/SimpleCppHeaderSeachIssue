#include <iostream>

#include "header2.h"
#include "header1.h"



int doSub(int a, int b)
{
    CHECKF(a > 0 && b > 0);

    
    return SOME_SUB(a, b);
}


int main() {
    int a = 3;
    int b = 4;

    std::cout << "Add:" << doAdd(a, b) << " Sub:" << doSub(b, a) << std::endl;
    return 0;
    

}