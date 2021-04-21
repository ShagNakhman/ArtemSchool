// ввод размер массива
/*
do {
	cout << "введите длину массива(строка)" << endl;
	cin >> lengthArrayLine;
	cout << "введите длину массива(столбец)" << endl;
	cin >> lengthArrayColumn;
	system("cls");
} while (lengthArrayColumn < 1 || lengthArrayLine < 1);
*/


//обьявление бвухмерного динамического массива
/*
	int **numbersArray;
	int lengthArrayLine = 2;//строка
	int lengthArrayColumn = 2;//столбец
	numbersArray[lengthArrayLine] = new int[lengthArrayColumn];
*/


//поиск минимального и максимального числа 
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




