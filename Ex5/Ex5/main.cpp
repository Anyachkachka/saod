#include "pch.h"
#include "Test.h"


void foo(Test t) {
    cout << "foo is running" << endl;
}

int main()
{
    /*cout << "Before creation" << endl;
    {
        Test test;
        cout << "After creation" << endl;
        cout << "Before destruction" << endl;
    }
    cout << "After destruction" << endl;*/
    //cout << "After Creation" << endl;
    //cout << "Before creation" << endl;
    /*Test* p;
    p = new Test;
    cout << "After creation" << endl;
    cout << "Before detruction" << endl;
    delete p;
    cout << "After destruction" << endl;
    delete p;
    p = new Test[3];
    delete[] p;*/
    /*Test test;
    foo(test);*/
    //Child ch;
    //Aggregate ag;
    AggregateT<Test> da;
    AggregateT<Child> ta;
}
