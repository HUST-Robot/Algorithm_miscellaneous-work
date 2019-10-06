#include <iostream>
#include "swap.h"
using namespace std;

/*
 call by Value : 값에 의한 호출 
 - 함수를 호출할 때 값에 의한 방법은 변수 혹은 상수를 인자로 넣어서 호출 하는 방식
 결국 이는 어떤 변수로 호출하든지 값이 넘어오며 그 값을 복사되는 것을 의미
*/

int main()
{
	Swap swap; 

	int num1 = 0;
	int num2 = 0; 
	if (num1 =! num2)
	{
		cout << "숫자 2개를 입력하시오 : ";
		cin >> num1 >> num2;

	}
	else
	{
		cout << "두 수는 동일한 숫자입니다 서로 다른 숫자를 입력하세요 !! " << endl;
	}

	cout << "main 함수 내의 num1 ,num2 주소 : " << &num1 << " " << &num2 << endl;
	cout << "main 함수 내의 num1 ,num2 값 : " << num1 << " " << num2 << endl << endl;

	cout << "swap 함수 실행 전 : num1 = " << num1 << " b = " << num2 << endl << endl;
	swap.swap(num1, num2);
	cout << "swap 함수 실행 후 : num1 = " << num1 << " b = " << num2 << endl << endl;
	return 0; 

}
void Swap::swap(int a, int b)
{
	temp = a; 
	a = b; 
	b = temp;

	cout << "swap 함수 내의 num1 ,num2 주소 : " << &a << " " << &b << endl;
	cout << "swap 함수 내의 num1 ,num2 값 : " << a << " " << b << endl << endl;
}

