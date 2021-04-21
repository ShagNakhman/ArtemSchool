#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

void searchMinNum(int **twoDimensionalArray, int line,
	int column, int& minNumber, int& lineNum, int& columnNum)
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


void searchMaxNum(int **twoDimensionalArray, int line,
	int column, int& maxNumber, int& lineNum, int& columnNum)
{
	maxNumber = twoDimensionalArray[0][0];
	for (int i = 0; i < line; i++)
	{
		for (int j = 0; j < column; j++)
		{
			if (maxNumber < twoDimensionalArray[i][j])
			{
				maxNumber = twoDimensionalArray[i][j];
				lineNum = i;
				columnNum = j;
			}
		}
	}
}

int main()
{
	setlocale(LC_ALL, "");
	srand(time(NULL));

	int **numbersArray;
	int lengthArrayLine;//������
	int lengthArrayColumn;//�������
	int startDiapazon = 0, endDiapazon = 0;

	int minNum = 0, maxNum = 0;
	int coordinateMinNumLine = 0, coordinateMinNumColumn = 0;
	int coordinateMaxNumLine = 0, coordinateMaxNumColumn = 0;
	int chooseProg;

	do {
		cout << "������� ����� ���������" << endl
			<< "1- ����������� � ������������ �����" << endl
			<< "0- �����" << endl;
		cin>>chooseProg;
		if (chooseProg == 1)
		{
			//������ ����������� �������
			do {
				cout << "������� ����� �������(������)" << endl;
				cin >> lengthArrayLine;
				cout << "������� ����� �������(�������)" << endl;
				cin >> lengthArrayColumn;
				system("cls");
			} while (lengthArrayColumn < 1 || lengthArrayLine < 1);


			//���������� ����� �������
		/*
				numbersArray[ lengthArrayLine] = new int[lengthArrayColumn];
			//	numbersArray[lengthArrayLine] = new int;

				int(*arraySumDiagonal)[5] = new int[5][5];

				*/
			numbersArray = new int* [lengthArrayLine];
			for (int i = 0; i < lengthArrayLine; i++)
			{
				numbersArray[i] = new int[lengthArrayColumn];
			}


			do {
				cout << "������� ������ ��������� ��� �������" << endl;
				cin >> startDiapazon;
				cout << "������� ����� ��������� ��� �������" << endl;
				cin >> endDiapazon;
				if (startDiapazon < endDiapazon)
				{
					cout << "�� ����� ������������ ��������" << endl;
				}
				system("cls");
			} while (startDiapazon > endDiapazon);


			//���������� ���������� �������
			for (int i = 0; i < lengthArrayLine; i++)
			{
				for (int j = 0; j < lengthArrayColumn; j++)
				{
					numbersArray[i][j] = rand() % endDiapazon + startDiapazon;
				}
			}

			searchMinNum(numbersArray, lengthArrayLine, lengthArrayColumn, minNum, coordinateMinNumLine, coordinateMinNumColumn);
			searchMaxNum(numbersArray, lengthArrayLine, lengthArrayColumn, maxNum, coordinateMaxNumLine, coordinateMaxNumColumn);

			//�����
			cout << "������ ������� �� ���������" << endl;
			for (int i = 0; i < lengthArrayLine; i++)
			{
				cout << i + 1 << ") ";
				for (int j = 0; j < lengthArrayColumn; j++)
				{
					cout << numbersArray[i][j] <<" ";

				}
				cout << endl;
			}
			cout << endl << "����������� ����� = " << minNum << endl
				<< "����� � ������ = " << coordinateMinNumLine << endl
				<< "����� � ������� = " << coordinateMinNumColumn << endl
				<< endl << "������������ ����� = " << maxNum << endl
				<< "����� � ������ = " << coordinateMaxNumLine << endl
				<< "����� � ������� = " << coordinateMaxNumColumn << endl;
			system("pause");
		}
		else if(chooseProg==0)
		{
			exit(chooseProg == 0);
		}
		else
		{
			cout << "�� ����� ������������ �����" << endl;
			system("pause");
			system("cls");
		}
		system("cls");
	} while (true);

	system("pause");
	return 0;
}
