#include <iostream>
#include "Polynomial.h"

using namespace std;

int main()
{
	// a ���� �� �Է� �ް� �״��� ��� ���� b ���� 
	Polynomial p1, p2;
	cout << "�Է¹�� ���׽� ���� ���� n���Է� -> x^2+1x+5 -> 1 2 1 1 5 0" << endl;
	cout << "���׽� A�� ���Ǽ� "; 
	cin >> p1;

	cout << "�Է¹�� ���׽� ���� ���� n���Է� -> x^2+1x+5 -> 1 2 1 1 5 0" << endl;
	cout << "���׽� b�� ���Ǽ� ";
	cin >> p2;

	Polynomial p3 = p1 + p2;

	cout << p3;

	return 0;
}