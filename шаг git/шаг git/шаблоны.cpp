// ���� ������ �������
/*
do {
	cout << "������� ����� �������(������)" << endl;
	cin >> lengthArrayLine;
	cout << "������� ����� �������(�������)" << endl;
	cin >> lengthArrayColumn;
	system("cls");
} while (lengthArrayColumn < 1 || lengthArrayLine < 1);
*/


//���������� ����������� ������������� �������
/*
	int **numbersArray;
	int lengthArrayLine = 2;//������
	int lengthArrayColumn = 2;//�������
	numbersArray[lengthArrayLine] = new int[lengthArrayColumn];
*/


//����� ������������ � ������������� ����� 
/*
int searchMinNum(int **twoDimensionalArray, int line,
	int column, int& minNumber,int& lineNum,int& columnNum)
{
	minNumber = twoDimensionalArray[0][0];
	for (int i = 0; i < line; i++)
	{
		for (int j = 0; j < column; j++)
		{
			if (minNumber > twoDimensionalArray[i][j])
			{
				minNumber = twoDimensionalArray[i][j];
				lineNum = i;
				columnNum = j;
			}
		}
	}
}
*/




