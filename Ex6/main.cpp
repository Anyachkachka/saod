#include <iostream>
#include <string>
#include <vector>
#include "BadCharTbl.h"
#include "timer.h"
#include "boxplot.h"

std::vector<size_t> BMH(const std::string t, const std::string T){
    std::vector<size_t> result;
    size_t m = std::size(t);
    size_t n = std::size(T); 
    BadCharTbl tbl = BadCharTbl(t, m);
    size_t s = 0;
    while(s <= (n-m)){
        int i = m-1;
        while(i >= 0 && t[i] == T[s+i]) i--;
        if(i < 0){
            result.push_back(s);
            s++;
        }
        else{
            s += std::max(1, i - tbl[T[s+i]]);
        }
    }
    return result;
} 

std::string get_random_str(size_t n, char last_char='z'){
    const int alphaBetSize = last_char - 'a' + 1;
    std::string s = "";
    for (size_t i = 0; i < n; i++)
        s.push_back(rand() % alphaBetSize + 'a');
    return s;
}

int main(){
    srand(time(0));
    std::string T;
    std::string t;
    std::vector<double> times(10);
    std::vector<size_t> indx;
    size_t M = 4;
    
    std::cout << "change str size" << "\n\n\n";
    for(size_t N = 100000; N < 10000000; N *= 4){
        std::cout << "N = " << N << std::endl;
        t = get_random_str(M);
        T = get_random_str(N);
        for(int i = 0; i < 10; i++){
            indx.clear();
            Timer<double>::reset();
            int index = 0;
            while(index != -1 && index < N){
                index = T.find(t, index);
                if(index != std::string::npos)indx.push_back(index);
                if (index != -1) index++;
            }
            times[i] = Timer<double>::elapsed_milliseconds();
        }
        std::cout << "std::find indx:" << std::endl;
        for(size_t ind: indx) std::cout << ind << " ";
        std::cout<< std::endl << "std::find time:" << BoxPlot::mean(times) << std::endl;

        for(int i = 0; i < 10; i++){
            indx.clear();
            Timer<double>::reset();
            indx = BMH(t, T);
            times[i] = Timer<double>::elapsed_milliseconds();
        }
        std::cout << "BMH indx:" << std::endl;
        for(size_t ind: indx) std::cout << ind << " ";
        std::cout<< std::endl << "BMH time:" << BoxPlot::mean(times) << std::endl;

        std::cout << "\n\n\n";
    }
    M = 30;
    size_t N = 10000000;
    for (char ch = 'b'; ch <= 'z'; ch = ch + (ch - 'a') * 2){
        t = get_random_str(M, ch);
        T = get_random_str(N, ch);
        std::cout << "alphabet size: " << ch - 'a' << std::endl;
        for(int i = 0; i < 10; i++){
            indx.clear();
            Timer<double>::reset();
            int index = 0;
            while(index != -1 && index < N){
                index = T.find(t, index);
                if(index != std::string::npos)indx.push_back(index);
                if (index != -1) index++;
            }
            times[i] = Timer<double>::elapsed_milliseconds();
        }
        std::cout << "std::find indx:" << std::endl;
        for(size_t ind: indx) std::cout << ind << " ";
        std::cout<< std::endl << "std::find time:" << BoxPlot::mean(times) << std::endl;

        for(int i = 0; i < 10; i++){
            indx.clear();
            Timer<double>::reset();
            indx = BMH(t, T);
            times[i] = Timer<double>::elapsed_milliseconds();
        }
        std::cout << "BMH indx:" << std::endl;
        for(size_t ind: indx) std::cout << ind << " ";
        std::cout<< std::endl << "BMH time:" << BoxPlot::mean(times) << std::endl;

        std::cout << "\n\n\n";
    }


    return 0;
}