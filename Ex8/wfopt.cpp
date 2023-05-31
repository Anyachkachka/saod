#include "wfopt.h"
#include <algorithm>

int Distance(const std::string s, const std::string t){
    int M = s.size();
    int N = t.size();
    int* p1 = new int[N+1];
    int *p2 = new int[N+1];
    for (int i = 0; i < N+1; i++)
        p1[i] = i;
    int p;
    for (int i = 1; i < M+1; i++){
        p2[0] = i;
        for (int j = 1; j < N+1; j++){
            p = s[i-1] == t[j-1] ? 0 : 1;
            p2[j] = std::min(p1[j]+1, std::min(p2[j-1]+1, p1[j-1]+p));
        }   
        delete[] p1;
        p1 = p2;
        p2 = new int[N+1];
    }
    int distance = p1[N];
    delete[] p1;
    delete[] p2;
    return distance;
}