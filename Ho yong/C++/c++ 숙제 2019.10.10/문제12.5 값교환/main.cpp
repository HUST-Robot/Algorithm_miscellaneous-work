#include <iostream>

using namespace std;

template<typename T>
void swapValue(T& v1, T& v2)
{
	T temp; 
	temp = v1; 
	v1 = v2;
	v2 = temp;
}
int main()
{
	int a = 5, b = 7;
	double a1 = 2.3, b2 = 21.5;
	string str1 = "abc", str2 = "bcd"; 
	
	cout << "swap �� �� " << a << " " << b << endl;
	swapValue(a, b);
	cout << "swap �� �� " << a << " " << b << endl;
	cout << endl;
	cout << "swap �� �� " << a1 << " " << b2 << endl;
	swapValue(a1, b2);
	cout << "swap �� �� " << a1 << " " << b2 << endl;
	cout << endl;
	cout << "swap �� �� " << str1 << " " << str2 << endl;
	swapValue(str1, str2);
	cout << "swap �� �� " << str1 << " " << str2 << endl;
   

	


}