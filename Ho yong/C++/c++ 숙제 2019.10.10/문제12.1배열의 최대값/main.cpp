// 12.1 문제
#include <iostream>
#include <string>

using namespace std;

/*
 배열의 최대값 구하기 int double string 
*/
template<typename T>
T arrayMax(T* arr, int size)
{
	// int , double , string 
	T max = *arr; 
	for (int i = 0; i < size; i++)
	{
		if (max < arr[i])
		{
			// Max의 값보다 array[i] 크면 max = array[i]
			max = arr[i];
		}
	}
	return max; 
}

int main()
{
	// 배열 선언 부분 
	int arr1[] = { 10, 20, 60, 40, 50 ,2, 190, 150};
	double arr2[] = { 2.5 , 1.4, 2.8 , 3.5, 10.1 };
	string arr3[] = { "cat" ,"host" , "post" , "mail" ,"tree" ,"zoo"}; 

	// 템플릿 함수 부분 
	
	// 출력 부분 
	cout << "int array max number is " << arrayMax<int>(arr1, size(arr1)) << endl;
	cout << "double array max number is " << arrayMax<double>(arr2, size(arr2)) << endl;
	cout << "string array max number is " << arrayMax<string>(arr3, size(arr3))  << endl;
	
	return 0; 
}