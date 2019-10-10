#include <iostream>
using namespace std;

/*
1. ����ڿ���n�� �Է¹ޱ�
2. ���� ��� ȭ�� �����
 N*N 2���� �迭 ���� �ʿ�
 2-1 2���� �迭 �� �ֱ�
 2-2 ����ڿ��� �޴� �Է°� üũ
  ->" A(����) To " ����ڿ��� �Է°��� 4 -> 'A' + 4 - 1 = 3 ->>  A B C D (0.A 1.B 2.C 3.D)
3. 2���� ���� �迭 ����
4. �޸� ��ȯ
------- ��ƾ ���� üũ ���� -------------
5. ���� �ٿ� ���� ���� �ִ��� üũ
6. ���� �ٿ� ���� ���� �ִ��� üũ
7 5��, 6�� ����ϸ� ��ƾ ����
*/
int main()
{
	int number;
	cout << "Enter number n : ";
	cin >> number;

	// 2���� �迭 ���� �Ҵ�
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
			// ����ڿ��� �Է� ����
			cin >> array[i][j];
			// ����ڿ��� �޴� üũ (�Է� ���� üũ)
			if (array[i][j] < 'A' || array[i][j] >= 'A' + number)
			{
				cout << "Wrong input : the letters nust be from A to " << (char)('A' + number - 1) << endl;
				// A(����) TO ����ڿ��� �Է°��� 4 -> 'A' + 4 - 1 = 3 ->>  A B C D (0.A 1.B 2.C 3.D)
				return 0;
			}
		}
	}
	// 2���� �迭 �ϼ��Ǿ����� Ȯ�� TEST �ڵ�
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
	// ������ üũ
	// ���� �� �ȿ� ���� ���ڰ� ������ �ȵ�
	// ���� �� �ȿ� ���� ���ڰ� ������ �ȵ�
	for (int i = 0; i < number; i++)
	{
		for (int j = 0; j < number; j++)
		{
			// ���� �� �˻��ϸ鼭 �������� �ִ��� üũ
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

	// �޸� ��ȯ
	for (int i = 0; i < number; i++)
	{
		delete[] array[i];
	}
	delete[] array;

	return 4;
}
