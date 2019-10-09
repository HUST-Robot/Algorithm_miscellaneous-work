#include <iostream>
#include <vector>

using namespace std;

/*
1. 사용자에게n개 입력받기
2. 샘플 결과 화면 만들기
 2-1 2차원 배열 값 넣기
 2-2 사용자에게 받는 입력값 체크 
  ->" A(고정) To " 사용자에게 입력값이 4 -> 'A' + 4 - 1 = 3 ->>  A B C D (0.A 1.B 2.C 3.D)

3. Vector 사용해서 크기 고정되는 문제 해결하기
  - 2차원배열 동적할당으로 하면되는 문제지만 문제가 n 하나만 받아서 하는것이므로 Vector 이용
4. n*m 이중 배열 만들기 백터 
  - 선언 하는 방법 -
  vector<vector<int>> arr; // arr 이중 벡터 선언
	arr.assign(n, vector<int>(n, 0)); // arr[n][n] 할당, 0으로 초기화
5. 가로 줄에 같은 문자 있는지 체크 
6. 세로 줄에 같은 문자 있는지 체크 
7 5번, 6번 통과하면 라틴 방진
*/

int main()
{

	int number = 0;

	cout << "Enter number n : ";
	cin >> number;
	vector<vector<char>> array;
	array.assign(number, vector<char>(number));

	// 2 샘플 결과 출력 
	cout << "Enter " << number << " rows of letters separated by spaces:" << endl;
	for (int i = 0; i < number; i++)
	{
		for (int j = 0; j < number; j++)
		{
			cin >> array[i][j];

			// 사용자에게 받는 체크 (입력 오류 체크)
			if (array[i][j] < 'A' || array[i][j] >= 'A' + number)
			{
				cout << "Wrong input : the letters nust be from A to " << (char)('A' + number - 1) << endl;
				// A(고정) TO 사용자에게 입력값이 4 -> 'A' + 4 - 1 = 3 ->>  A B C D (0.A 1.B 2.C 3.D)
				return 1; 
			}
		}
	}

	// 2차원 배열 완성되었는지 확인 TEST 코드 
	/*
	for (int i = 0; i < number; i++)
	{
		for (int k = 0; k < number; k++)
		{
			cout << array[i][k];
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
			for (int k = j + 1; k < number; k++)
			{
				// A 체크 하기 위해서 자기 위치의 행을 검색하면서 같은것이 있는지 파악 
				if (array[i][j] == array[i][k])
				{
					cout << "The input array is not a Latin square";
					cout << "erro2"; 
					return 2;

				}
				else if (array[j][i] == array[k][i])
				{
					cout << "The input array is not a Latin square";
					cout << "erro3";
					return 3; 
				}
			}  
		}
	}

	cout << "The input array is a Latin square" << endl;

	return 0;

}