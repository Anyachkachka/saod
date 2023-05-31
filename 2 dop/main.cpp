#include <iostream>
#include <cstring>
#include <cstdlib>

int main(int argv, char** argc){
    if (argv != 4){
        std::cout << "wrong number of arguments";
        return 1;
    }
    char * first_number = argc[2];
    char * second_number = argc[3];
    for (int i = 0; i < std::strlen(first_number); i++){
        if (!std::isdigit(first_number[i])){
            std::cout << "wrong number";
            return 1;
        }
    }
    for (int i = 0; i < std::strlen(second_number); i++){
        if (!std::isdigit(first_number[i])){
            std::cout << "wrong number";
            return 1;
        }
    }

    int a = std::atoi(first_number);
    int b = std::atoi(second_number);
    if (!std::strcmp(argc[1], "add")) std::cout << a+b << std::endl;
    if (!std::strcmp(argc[1], "sub")) std::cout << a-b << std::endl;
    if (!std::strcmp(argc[1], "mul")) std::cout << a*b << std::endl;
    if (!std::strcmp(argc[1], "div")) 
    {
        if (b == 0){
            std::cout << "divide by zero";
            return 1;
        }
        std::cout << a/double(b) << std::endl;
    }
    
    return 0;
}