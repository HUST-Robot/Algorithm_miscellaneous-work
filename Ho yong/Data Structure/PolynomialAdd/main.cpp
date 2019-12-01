#include <iostream>
#include "Polynomial.h"

using namespace std;

int main()
{
	// a 항의 수 입력 받고 그다음 계수 지수 b 동일 
	Polynomial p1, p2;
	cout << "입력방법 다항식 항의 개수 n개입력 -> x^2+1x+5 -> 1 2 1 1 5 0" << endl;
	cout << "다항식 A의 항의수 "; 
	cin >> p1;

	cout << "입력방법 다항식 항의 개수 n개입력 -> x^2+1x+5 -> 1 2 1 1 5 0" << endl;
	cout << "다항식 b의 항의수 ";
	cin >> p2;

	Polynomial p3 = p1 + p2;

	cout << p3;

	return 0;
}