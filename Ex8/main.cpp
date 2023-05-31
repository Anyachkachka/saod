#include <iostream>
#include <string>
#include "wf.h"
#include "wfopt.h"

int main(){
    WF matrix;
    std::string s1 = "agsdfgjkhjksdfgs", s2 = "adsgdfgsfsd";
    matrix.Init(s1, s2);
    for (int i = 0; i<matrix.Rows(); i++){
        for (int j = 0; j < matrix.Columns(); j++){
            std::cout << matrix.Get(i, j) << "\t";
        }
        std::cout << std::endl;
    }
    std::cout << "Distanse = " << matrix.Distance() << std::endl;
    std::cout << "Opt distance = " << Distance(s1, s2) << std::endl;
    return 0;
}