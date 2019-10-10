#include <iostream>
using namespace std;

/*
1. 사용자에게n개 입력받기
2. 샘플 결과 화면 만들기
 N*N 2차원 배열 생성 필요
 2-1 2차원 배열 값 넣기
 2-2 사용자에게 받는 입력값 체크
  ->" A(고정) To " 사용자에게 입력값이 4 -> 'A' + 4 - 1 = 3 ->>  A B C D (0.A 1.B 2.C 3.D)
3. 2차원 동적 배열 생성
4. 메모리 반환
------- 라틴 방진 체크 구현 -------------
5. 가로 줄에 같은 문자 있는지 체크
6. 세로 줄에 같은 문자 있는지 체크
7 5번, 6번 통과하면 라틴 방진
*/
int main()
{
	int number;
	cout << "Enter number n : ";
	cin >> number;

	// 2차원 배열 동적 할당
	char** array;
	array = new char* [number];
	for (int i = 0; i < number; i++)
	{
		array[i] = new char[number];
	}

	for (int i = 0; i < number; i++)
	{
		for (int j = 0; j < number; j++)
		{
			// 사용자에게 입력 받음
			cin >> array[i][j];
			// 사용자에게 받는 체크 (입력 오류 체크)
			if (array[i][j] < 'A' || array[i][j] >= 'A' + number)
			{
				cout << "Wrong input : the letters nust be from A to " << (char)('A' + number - 1) << endl;
				// A(고정) TO 사용자에게 입력값이 4 -> 'A' + 4 - 1 = 3 ->>  A B C D (0.A 1.B 2.C 3.D)
				return 0;
			}
		}
	}
	// 2차원 배열 완성되었는지 확인 TEST 코드
	/*
	for(int i = 0 ; i < number; i++)
	{
		for(int j = 0 ; j < number; j++)
		{
			cout << array[i][j];
		}
		cout << endl;
	}
	*/
	// 마방진 체크
	// 가로 행 안에 같은 문자가 있으면 안됨
	// 세로 열 안에 같은 문자가 있으면 안됨
	for (int i = 0; i < number; i++)
	{
		for (int j = 0; j < number; j++)
		{
			// 행을 쭉 검색하면서 같은것이 있는지 체크
			for (int k = j + 1; k < number; k++)
			{
				if (array[i][j] == array[i][k])
				{
					cout << "The input array is not a Latin square" << endl;
					return 2;
				}
				else if (array[j][i] == array[k][i])
				{
					cout << "The input array is not a Latin square" << endl;
					return 3;

				}
			}
		}
	}
	cout << "The input array is a Latin square" << endl;

	// 메모리 반환
	for (int i = 0; i < number; i++)
	{
		delete[] array[i];
	}
	delete[] array;

	return 4;
}
