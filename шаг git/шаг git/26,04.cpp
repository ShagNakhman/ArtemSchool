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
	int lengthArrayLine;//строка
	int lengthArrayColumn;//столбец
	int startDiapazon, endDiapazon;

	int minNum = 0, maxNum = 0;
	int coordinateMinNumLine = 0, coordinateMinNumColumn = 0;
	int coordinateMaxNumLine = 0, coordinateMaxNumColumn = 0;
	int chooseProg;

	do {
		cout << "введите номер программы" << endl
			<< "1- минимальное и максимальное число" << endl
			<< "0- выход" << endl;
		cin>>chooseProg;
		if (chooseProg == 1)
		{
			//размер двухмерного массива
			do {
				cout << "введите длину массива(строка)" << endl;
				cin >> lengthArrayLine;
				cout << "введите длину массива(столбец)" << endl;
				cin >> lengthArrayColumn;
				system("cls");
			} while (lengthArrayColumn < 1 || lengthArrayLine < 1);


			//присвоение длины массива
			//for (int i = 0; i < lengthArrayLine; i++)
			//{
				numbersArray/*[lengthArrayLine]*/ = new int*[lengthArrayColumn];
				numbersArray[lengthArrayLine] = new int[lengthArrayColumn];



			do {
				cout << "введите начало диапазона для рандома" << endl;
				cin >> startDiapazon;
				cout << "введите конец диапазона для рандома" << endl;
				cin >> endDiapazon;
				if (startDiapazon < endDiapazon)
				{
					cout << "вы ввели неправильный диапазон" << endl;
				}
				system("cls");
			} while (startDiapazon > endDiapazon);


			//заполнение двумерного массива
			for (int i = 0; i < lengthArrayLine; i++)
			{
				for (int j = 0; j < lengthArrayColumn; j++)
				{
					numbersArray[i][j] = rand() % endDiapazon + startDiapazon;
				}
			}

			//вывод
			cout << "массив состоит из элементов" << endl;
			for (int i = 0; i < lengthArrayLine; i++)
			{
				cout << i + 1 << ") ";
				for (int j = 0; j < lengthArrayColumn; j++)
				{
					cout << numbersArray[i][j];

				}
				cout << endl;
			}
			cout << endl << "минимальное число = " << minNum << endl
				<< "лежит в строке = " << coordinateMinNumLine << endl
				<< "лежит в столбце = " << coordinateMinNumColumn << endl
				<< endl << "максимальное число = " << maxNum << endl
				<< "лежит в строке = " << coordinateMaxNumLine << endl
				<< "лежит в столбце = " << coordinateMaxNumColumn << endl;
			system("pause");
		}
		else if(chooseProg==0)
		{
			exit(chooseProg == 0);
		}
		else
		{
			cout << "вы ввели неправильное число" << endl;
			system("pause");
			system("cls");
		}
		system("cls");
	} while (true);





	system("pause");
	return 0;
}
