#pragma once
#include <iostream>

using namespace std;

class Swap
{
public:
	int temp;
	void swap(int &a, int &b); // 참조에 의한 호출 
};