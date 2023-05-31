#include <iostream>
#include "str.h"

int main(){
    Str s = "adf", p;
    s += "qaqaq";
    std::cout << s << std::endl;
    p = s;
    int n = s.replace('q', 'w');
    std::cout << s << ' ' << p << ' ' << n << std::endl;
    return 0;
}