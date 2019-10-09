#include <iostream>
#include <vector>

using namespace std;

/*
1. ����ڿ���n�� �Է¹ޱ�
2. ���� ��� ȭ�� �����
 2-1 2���� �迭 �� �ֱ�
 2-2 ����ڿ��� �޴� �Է°� üũ 
  ->" A(����) To " ����ڿ��� �Է°��� 4 -> 'A' + 4 - 1 = 3 ->>  A B C D (0.A 1.B 2.C 3.D)

3. Vector ����ؼ� ũ�� �����Ǵ� ���� �ذ��ϱ�
  - 2�����迭 �����Ҵ����� �ϸ�Ǵ� �������� ������ n �ϳ��� �޾Ƽ� �ϴ°��̹Ƿ� Vector �̿�
4. n*m ���� �迭 ����� ���� 
  - ���� �ϴ� ��� -
  vector<vector<int>> arr; // arr ���� ���� ����
	arr.assign(n, vector<int>(n, 0)); // arr[n][n] �Ҵ�, 0���� �ʱ�ȭ
5. ���� �ٿ� ���� ���� �ִ��� üũ 
6. ���� �ٿ� ���� ���� �ִ��� üũ 
7 5��, 6�� ����ϸ� ��ƾ ����
*/

int main()
{

	int number = 0;

	cout << "Enter number n : ";
	cin >> number;
	vector<vector<char>> array;
	array.assign(number, vector<char>(number));

	// 2 ���� ��� ��� 
	cout << "Enter " << number << " rows of letters separated by spaces:" << endl;
	for (int i = 0; i < number; i++)
	{
		for (int j = 0; j < number; j++)
		{
			cin >> array[i][j];

			// ����ڿ��� �޴� üũ (�Է� ���� üũ)
			if (array[i][j] < 'A' || array[i][j] >= 'A' + number)
			{
				cout << "Wrong input : the letters nust be from A to " << (char)('A' + number - 1) << endl;
				// A(����) TO ����ڿ��� �Է°��� 4 -> 'A' + 4 - 1 = 3 ->>  A B C D (0.A 1.B 2.C 3.D)
				return 1; 
			}
		}
	}

	// 2���� �迭 �ϼ��Ǿ����� Ȯ�� TEST �ڵ� 
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

	// ������ üũ 
	// ���� �� �ȿ� ���� ���ڰ� ������ �ȵ� 
	// ���� �� �ȿ� ���� ���ڰ� ������ �ȵ� 

	for (int i = 0; i < number; i++)
	{
		for (int j = 0; j < number; j++)
		{
			for (int k = j + 1; k < number; k++)
			{
				// A üũ �ϱ� ���ؼ� �ڱ� ��ġ�� ���� �˻��ϸ鼭 �������� �ִ��� �ľ� 
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