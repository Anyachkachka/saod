#include <iostream>
#include "Str.h"

void Test(Str s) 
{
    cout << s << endl;
    cout << strlen(s) << endl;
}

int main()
{
    Str s = "123";
    cout << s << endl;
    cout << strlen(s) << endl;
    Test(s);
    cout << '\n' << endl;

    {
        Str t;
        t = s;
        t = s = t;
        Test(t);
        Test(s);
    }
    cout << '\n' << endl;

    Str a = "Hel";
    Str b = "lo";
    cout << a << endl;
    cout << b << endl;
    a += b;
    cout << a << endl;
    cout << '\n' << endl;

    Str m = "wor";
    Str n = "ld";
    cout << m << endl;
    cout << n << endl;
    Str f = m + n;
    cout << f << endl;
    cout << (f + " 29335") << endl;
}
