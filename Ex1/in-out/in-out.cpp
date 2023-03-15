// in-out.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
    cout << "Hello World!\n";
	int x, y;
	cout << "x = ? "; cin >> x; // Подсказка и ввод х
	cout << "y = ? "; cin >> y; // Подсказка и ввод y
	cout << x << " + " << y << " = " << x + y << endl;
	cout << x << " * " << y << " = " << x * y << endl;
	cout << x << " / " << y << " = " << x / y << endl;
	cout << x << " % " << y << " = " << x % y << endl;
	cout << x << " | " << y << " = " << (x | y) << endl;
	cout << x << " & " << y << " = " << (x & y) << endl;
	cout << x << " ^ " << y << " = " << (x ^ y) << endl;
	cout << x << " << " << y << " = " << (x << y) << endl;
	cout << x << " >> " << y << " = " << (x >> y) << endl;

}

