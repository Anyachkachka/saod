#include "str.h"
void Test(Str s){

}

int main(){
    auto print = [](Str s) {cout << s << " " << strlen(s) << endl; };
    Str* s = new Str("123");
    Str* q = new Str("456");
    Str* t = new Str("12");
    print(*s);
    Test(*s);
    print(*s);
    *t = *s;
    *t = *s = *t;
    print(*s);
    print(*t);
    *s += *q;
    print(*s);
    print(*q + *t);
    delete s;
    delete q;
    delete t;
    return 0;
}