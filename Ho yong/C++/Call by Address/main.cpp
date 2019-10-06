#include <iostream>
#include "swap.h"
using namespace std;

/*
 call by Address : 주소에 의한 호출 [포인터를 이용한 전달방식]
 - 함수 호출 시 변수의 주소를 인자로 넣어서 호출하는 방식
 이는 모두 똑같이 함수로 변수의 주소 값이 넘어가게 된다 이 값은 함수 내에서 매개변수로 받아 매개변수 값이 대입
 그렇다면 이 주소를 받으려면 매개변수는 주소를 저장할수 있는 변수여야 하는데 그 변수가 바로 "포인터 변수" 이다 
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
	swap.swap(&num1, &num2);
	cout << "swap 함수 실행 후 : num1 = " << num1 << " b = " << num2 << endl << endl;
	return 0; 

}
void Swap::swap(int *a, int *b)
{
	temp = *a; 
	*a = *b; 
	*b = temp;

	cout << "swap 함수 내의 num1 ,num2 주소 : " << &a << " " << &b << endl;
	cout << "swap 함수 내의 num1 ,num2 값 : " << a << " " << b << endl << endl;
}

