// saod7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <set> 
#include <unordered_set> 
#include <algorithm>
using namespace std;


void print_set(const set<int>& a) {
    for (int n : a)
        std::cout << n << "\t";
    std::cout << std::endl;
}
void print_set(const unordered_set<int>& a) {
    for (int n : a)
        std::cout << n << "\t";
    std::cout << std::endl;
}
template <typename T>
std::set<T> operator+(const std::set<T>& left, const std::set<T>& right) {
    std::set<T> result = left;
    result.insert(right.begin(), right.end());
    return result;
}

template <typename T>
std::unordered_set<T> operator+(const std::unordered_set<T>& left, const std::unordered_set<T>& right) {
    std::unordered_set<T> result = left;
    result.insert(right.begin(), right.end());
    return result;
}

template<typename T>
set<T> operator&(const set<T>& a, const set<T>& b) {
    set<T> result; // создаем пустое множество для результата
    set_intersection(a.begin(), a.end(), b.begin(), b.end(), inserter(result, result.begin())); // выполняем операцию пересечения
    return result; // возвращаем результат
}

template<typename T>
unordered_set<T> operator & (const unordered_set<T>& lhs, const unordered_set<T>& rhs) {
    unordered_set<T> result;
    for (auto& value : lhs) {
        if (rhs.count(value) > 0) {
            result.insert(value);
        }
    }
    return result;
}


void f() {
    set<int> a;
    set<int> a2;
    unordered_set<int> b;
    unordered_set<int> b2;
    srand(13);

    for (int i = 0; i < 13; i++) {
        a.insert(rand()%13);
        a2.insert(rand() % 13);
        b.insert(rand() % 13);
        b2.insert(rand() % 13);
    }

    print_set(a);
    print_set(a2);
    cout << "\n";
    print_set(b);
    print_set(b2);


    cout << "\n";
    set<int> c = a + a2;
    print_set(c);
    c = a2+ a;
    print_set(c);
    cout << "\n";

    unordered_set<int> b3 = b + b2;
    print_set(b3);
    cout << "\n\n\n";

    c = a2 &a;
    print_set(c);
    cout << "\n";

    b3 = b & b2;
    print_set(b3);
    cout << "\n";


}
int main()
{
    
    
    f();
    //Memory leak check.
    if (_CrtDumpMemoryLeaks()) {
        cout << "Memory leaks!\n";
    }
    else {
        cout << "No leaks\n";
    }

    cin.get();


}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
