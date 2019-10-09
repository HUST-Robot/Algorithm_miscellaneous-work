//12.3 이진탐색 
#include <iostream>
#include <string>

using namespace std;

template<typename T>
int binarySearch(T list[], int size, T choseNumber)
{
	
	int low = 0;
	int high = size - 1;

	while (high >= low)
	{
		int mid = (low + high) / 2;
		if (choseNumber < list[mid])
			high = mid - 1;
		else if (choseNumber == list[mid])
			return mid;
		else
			low = mid + 1;
	}
	//찾는 값이 없음 
	return -1;
}
int main()
{
	//배열 선언 부분 int double string 

	int arr1[] = { 2,4,5,6,7,10,20,40,50,66,70,80,90,100 };
	double arr2[] = { 1.2 , 2.2 , 3.1, 4.4 , 5.5 , 6.6, 7.7, 8.8 };
	string arr3[] = { "ai" , "ax" , "bi" , "ci" , "di" , "ei" ,"fi", "ff" };


	cout << "intSearch 찾고자 배열 인덱스 위치는  : " << binarySearch<int>(arr1, size(arr1), 66) << endl;
	cout << "doubleSearch 찾고자 배열 인덱스 위치는 : " << binarySearch<double>(arr2, size(arr2), 6.6) << endl;
	cout << "StringSearch 찾고자 배열 인덱스 위치는 : "  << binarySearch<string>(arr3, size(arr3), (string)"ei") << endl;

	return 0; 
}

