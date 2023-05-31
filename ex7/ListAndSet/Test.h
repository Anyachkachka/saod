#pragma once
#include <iostream>
class Test
{
public:
	int val;
	Test();
	Test(int v);
	Test(const Test& t);
	~Test();
	inline bool operator < (const Test &t2) const
	{
		return (val < t2.val);
	}
	inline bool operator == (const Test &t) const 
	{
		return (val == t.val);
	}
};

