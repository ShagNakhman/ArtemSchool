//#include<iostream>
//#include<ctime>
//
//using namespace std;
//
//int searchMinNum(int twoDimensionalArray[5][5])
//{
//	int minNumber = twoDimensionalArray[0][0];
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			if (minNumber > twoDimensionalArray[i][j])
//			{
//				minNumber = twoDimensionalArray[i][j];
//			}
//		}
//	}
//	return minNumber;
//}
//
//
//int searchMaxNum(int twoDimensionalArray[5][5])
//{
//	int maxNumber = twoDimensionalArray[0][0];
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			if (maxNumber < twoDimensionalArray[i][j])
//			{
//				maxNumber = twoDimensionalArray[i][j];
//			}
//		}
//	}
//	return maxNumber;
//}
//
//int main()
//{
//	setlocale(LC_ALL, "");
//	srand(time(0));
//
//	int numbersArray[5][5];
//	//заполнение двумерного массива
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			numbersArray[i][j] = rand() % 31 + 30;
//		}
//	}
//
//	//вывод
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			cout << numbersArray[i][j] << " ";
//
//		}
//		cout << endl;
//	}
//	cout << endl << "минимальное число = " << searchMinNum(numbersArray) << endl
//		<< endl << "максимальное число = " << searchMaxNum(numbersArray) << endl;
//
//	system("pause");
//	return 0;
//}
