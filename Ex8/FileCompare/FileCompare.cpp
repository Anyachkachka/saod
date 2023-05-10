#include <iostream>
#include "WF.h"
#include <fstream>


int main()
{
    WF a = WF();
    std::ifstream prev("prev.txt");
	std::ifstream curr("cur.txt");

	a.Compare(prev, curr);

	std::cout << "Distance: " << a.Distance() << std::endl;
	std::cout << "Rows: " << a.Rows() << std::endl;
	std::cout << "Columns: " << a.Columns() << std::endl;
	std::cout << a.Prescription() << std::endl;

	/*std::cout << a.CurLine(1) << std::endl;
	std::cout << a.PrevLine(4) << std::endl;
	for (int i = 0; i <= 60; i++)
	{
		for (int j = 0; j <= 61; j++)
			std::cout << a.pm[i + j * 61] << "  ";
		std::cout << '\n';
	}
	for (int i = 0; i < 2859; i++)
		if (a.pm[i] == 0)
			std::cout << i << std::endl;;
	std::cout << a.Get(50, 50) << std::endl;
	a.Set(1, 1, 5);
	std::cout << a.Get(1, 1) << std::endl;*/
}

