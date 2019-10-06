#include <iostream>
#include "swap.h"
using namespace std;

/*
 Call by  Reference : 참조에 의한 호출 
 함수 내에서 매개변수로 참조자가 정의되며, 인자로 넣은 변수로 초기화되며 이 변수를 참조하게 된다 
 C++ 제일 많이사용 되는 방식 !!
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
void Swap::swap(int &a, int &b)
{
	temp = a; 
	a = b; 
	b = temp;

	cout << "swap 함수 내의 num1 ,num2 주소 : " << &a << " " << &b << endl;
	cout << "swap 함수 내의 num1 ,num2 값 : " << a << " " << b << endl << endl;
}

