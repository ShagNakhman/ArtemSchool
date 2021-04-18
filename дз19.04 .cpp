#include<iostream>
#include<cstdlib>
#include<string>
#include<ctime>
#include<queue>

using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	srand(time(0));


	int chooseProg;
	cout << "введите какую программу вы хотите выбрать?" << endl
		<< "1- дз шаг" << endl
		<< "2 - доп. дз" << endl
		<< "0 - выход" << endl;
	cin >> chooseProg;

	if (chooseProg == 1)
	{
		int *numbers;
		int length;
		int startDiapazon;
		int endDiapazon;



		do {
			cout << "введите какой длины вы хотите массив" << endl;
			cin >> length;
			if (length < 1)
			{
				cout << "вы неправильно ввели размер массива" << endl;
				system("pause");
				system("cls");
			}
		} while (length < 1);
		system("cls");
		numbers = new int[length];

		do {
			cout << "введите диапазон для рандома" << endl
				<< "начало диапазона - ";
			cin >> startDiapazon;
			cout << "конец диапазона - ";
			cin >> endDiapazon;
		} while (endDiapazon < startDiapazon);

		for (int i = 0; i < length; i++)
		{
			numbers[i] = rand() % endDiapazon + startDiapazon;
		}
		system("cls");

		int minNum = numbers[0];
		int maxNum = numbers[0];
		//минимальное и максимальное число
		for (int i = 1; i < length; i++)
		{
			if (minNum > numbers[i])
			{
				minNum = numbers[i];
			}
		}
		for (int i = 0; i < length; i++)
		{
			if (maxNum < numbers[i])
			{
				maxNum = numbers[i];
			}
		}

		cout << "массив состоит из " << endl;
		for (int i = 0; i < length; i++)
		{
			cout << numbers[i] << " ";
		}
		cout << endl << "минимальное число в массиве = " << minNum << endl
			<< "максимальное число в массиве = " << maxNum << endl
			<< "четные числа в массиве =" << endl;

		//выводит четное число
		for (int i = 0; i < length; i++)
		{
			if (numbers[i] % 2 == 0)
			{
				cout << numbers[i] << " ";
			}
		}
		system("pause");
		system("cls");

		/*Пользователь вводит прибыль фирмы за год (12 месяцев-12чисел). Затем пользователь
		вводит диапазон(например, 3 и 6 – поиск между 3 - м и 6 - м месяцем).Необходимо определить
		месяц, в котором прибыль была максимальна и месяц, в котором прибыль была минимальна с
		учетом выбранного диапазона.*/
		int firmProfit[12];
		int profitYear;
		do {
			cout << "введите прибыль за год" << endl;
			cin >> profitYear;
		} while (profitYear < 1);

		for (int i = 0; i < 12; i++)
		{
			firmProfit[i] = rand() % profitYear;
		}

		do {
			cout << "введите диапазон поиска от 1 до 12" << endl
				<< "начало диапазона - ";
			cin >> startDiapazon;
			cout << "конец диапазона - ";
			cin >> endDiapazon;
			system("cls");
		} while (endDiapazon < startDiapazon);

		int minProfit = firmProfit[startDiapazon], maxProfit = firmProfit[startDiapazon];
		int monthMinProfit = startDiapazon, monthMaxProfit = startDiapazon;


		// счетчик показателя прибыли
		for (int i = startDiapazon++; i < endDiapazon; i++)
		{
			if (maxProfit < firmProfit[i])
			{
				maxProfit = firmProfit[i];
				monthMaxProfit = i;
			}
			if (minProfit > firmProfit[i])
			{
				minProfit = firmProfit[i];
				monthMinProfit = i;
			}


		}

		cout << "массив состоит из элементов" << endl;
		for (int i = 0; i < size(firmProfit); i++)
		{
			cout << firmProfit[i] << " ";
		}
		cout << endl << "Минимальная прибыль была в " << monthMinProfit + 1
			<< " месяце" << endl << " и составляло " << minProfit << endl
			<< "Максимальная прибыль была в " << monthMaxProfit + 1
			<< "месяце" << endl << " и составляло " << maxProfit << endl;
		system("pause");
		system("cls");

		/*В одномерном массиве, состоящем из N целых чисел вычислить:
		• Сумму отрицательных элементов.
		• Произведение элементов, находящихся между min и max элементами.
		• Произведение элементов с четными номерами.
		• Сумму элементов, находящихся между первым и последним отрицательными
		элементами.*/

		/*int * numbers;
		int length;*/
		int sumNegativeNum = 0;


		do {
			cout << "введите какой длины вы хотите массив" << endl;
			cin >> length;
			if (length < 1)
			{
				cout << "вы неправильно ввели размер массива" << endl;
				system("pause");
				system("cls");
			}
		} while (length < 1);
		system("cls");
		numbers = new int[length];

		//помещяем рандомные числа в массив
		//do {
		cout << "введите какое число будет последним в рандоме(для рандома)" << endl
			<< "введите диапазон - ";
		cin >> startDiapazon;
		cout << "end" << endl;
		cin >> endDiapazon;
		system("cls");
		//} while (startDiapazon < 0);
		int schet = 0;
		int compositionEvenNum = 1;
		for (int i = 0; i < length; i++)
		{
			numbers[i] = rand() % (endDiapazon - startDiapazon) + startDiapazon; //+ (startDiapazon*-1);
			/*if (numbers[i] % 2 == 0 && schet <2)
			{
				compositionEvenNum = numbers[i];
				schet = 3;
			}*/
		}

		int minNumber = numbers[0], maxNumber = numbers[0];


		int coordinatesMinNum, coordinatesMaxNum;
		int compositionNumberBetweenCoordinates = 0;

		int MinNegativeNum = minNumber, maxNegativeNum = numbers[0];
		int coordinateMinNegativeNum = 0, coordiinateMaxNegativeNum = 0;
		int compositionBetweenNegativeNum = 0;

		//сумма отрицыатлеьных чисел
		for (int i = 0; i < length; i++)
		{
			//сумма отрицательных чисел
			if (numbers[i] < 0)
			{
				sumNegativeNum += numbers[i];
			}
			//минимальное и максимальное число
			if (minNumber < numbers[i])
			{
				minNumber = numbers[i];
			}
			if (maxNumber > numbers[i])
			{
				maxNumber = numbers[i];
			}
			//произведение четных чисел 
			if (numbers[i] % 2 == 0)
			{
				compositionEvenNum *= numbers[i];
			}
		}


		for (int i = 0; i < length; i++)
		{
			if (minNumber == numbers[i])
			{
				coordinatesMinNum = i;
			}
			if (maxNumber == numbers[i])
			{
				coordinatesMaxNum = i;
			}
			if (MinNegativeNum > numbers[i] && numbers[i] < 0)
			{
				//	MinNegativeNum = numbers[i];
				coordinateMinNegativeNum = i;
			}
			if (maxNegativeNum > numbers[i] && numbers[i] < 0)
			{
				//maxNegativeNum = numbers[i];
				coordiinateMaxNegativeNum = i;
			}
		}

		for (int i = coordinateMinNegativeNum; i <= coordiinateMaxNegativeNum; i++)
		{
			compositionBetweenNegativeNum += numbers[i];
		}


		//произвденение чисел между минимальным и максимальным числом
		for (int i = coordinatesMinNum; i <= coordinatesMaxNum; i++)
		{
			compositionNumberBetweenCoordinates += numbers[i];
		}

		cout << "массив состоит из элементов" << endl;
		for (int i = 0; i < length; i++)
		{
			cout << numbers[i] << " ";

		}
		cout << endl << "сумма отрицательных чисел = " << sumNegativeNum << endl
			<< "произведение чисел между минимальным и максимальным числом = " << compositionNumberBetweenCoordinates << endl
			<< "произведение четных чисел = " << compositionEvenNum << endl
			<< "произведение чисел между минимальным и максимальным отрицательным числом = " << compositionBetweenNegativeNum << endl;

	}
	else if (chooseProg == 2)
	{
		int numbers[2][5];
		//int *arr = &numbers[0][0];
		int NumberStep;
		int startDiapazon, endDiapazon;
		int stepProvisions;

		system("cls");
		do {
			cout << "введите диапазон поиска от 1 до 12" << endl
				<< "начало диапазона - ";
			cin >> startDiapazon;
			cout << "конец диапазона - ";
			cin >> endDiapazon;
			system("cls");
		} while (endDiapazon < startDiapazon);

		//cout << "массив состоит из элементов " << endl;
		for (int i = 0; i < 2; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				numbers[i][j] = rand() % endDiapazon + startDiapazon;

			}
		}
		do {
			do
			{
				cout << "выберите в какую сторону хотите сдвих" << endl
					<< "1 - влево" << endl
					<< "2 - вправо" << endl
					<< "3 - вниз" << endl
					<< "4 - вверх" << endl;
				cin >> stepProvisions;
				do
				{
					if (stepProvisions == 1 || stepProvisions == 2)
					{
						cout << "введите на сколько вы хотите переместить" << endl;
						cin >> NumberStep;
					}
				} while (NumberStep < 1 || NumberStep>5);

			} while (stepProvisions < 1 || stepProvisions >4);

			queue<int> arr;
			switch (stepProvisions)
			{
				//case 1:
			case 2:
				int *temporaryExit;
				temporaryExit = new int[NumberStep];
				int temporary;
				int temporaryArray[2][5];

				for (int i = 0; i < NumberStep; i++)
				{
					temporaryExit[i] = numbers[1][4 - i];
				}
				// создаие очереди
				for (int i = 0; i < 2; i++)
				{
					for (int j = 0; j < 5; j++)
					{
						arr.push(numbers[i][j]);
					}
				}

				int schetNum = 0;
				for (int i = 0, schet = 0, e = 0; e < 3; i++, e++)
				{
					if (e >= 2)
					{
						i = 0;
					}
					if (schet == 4 || e >= 2)
					{
						break;
					}

					for (int j = 0, k = 0; k < 5; j++, k++)
					{
						if (j + (stepProvisions - 1) > 5)
						{
							j = stepProvisions*-1;
							schet++;
						}
						if (schet == 4)
						{
							break;
						}
						temporaryArray[i][j + (stepProvisions)] = arr.front();

						arr.pop();
						if (i == 2)
						{
							temporaryArray[0][(stepProvisions*-1) + stepProvisions] = arr.front();
							arr.pop();
							schetNum++;
						}
					}
				}
				/*for (size_t i = 0; i < length; i++)
				{
					temporaryArray[0][i + (stepProvisions)] = arr.front();
					arr.pop();
				}*/
				cout << "изначальный массив" << endl;
				for (int i = 0; i < 2; i++)
				{
					for (int j = 0; j < 5; j++)
					{
						cout << numbers[i][j] << " ";
					}
					cout << endl;
				}
				cout << endl;
				for (int i = NumberStep-1; i >= 0; i--)
				{
					cout << temporaryExit[i] << " ";
				}
				for (int i = NumberStep; i < 5; i++)
				{
					cout << temporaryArray[0][i] << " ";
				}
				for (int j = 0; j < 5; j++)
				{
					cout << temporaryArray[1][j] << " ";
				}
				cout << endl;


				//case 3:
					/*int temporary[5];
					for (int i = 0; i < 5; i++)
					{
						temporary[i] = numbers[1][i];


					}
					for (int i = 0; i < 5; i++)
					{
						numbers[1][i] = numbers[2][i];
					}
					for (int i = 0; i < 5; i++)
					{
						numbers[2][i] = temporary[i];
					}
					break;*/
					//	case 4:
							/*int temporary[5];
							for (int i = 0; i < 5; i++)
							{
								temporary[i] = numbers[1][i];
							}
							for (int i = 0; i < 5; i++)
							{
								numbers[1][i] = numbers[2][i];
							}
							for (int i = 0; i < 5; i++)
							{
								numbers[2][i] = temporary[i];
							}
							break;
						default:
							break;
						}*/

			}
		} while (true);
	}
	else if (chooseProg == 0)
	{
		exit(chooseProg == 0);
	}
	else
	{
		cout << "вы ввели неправильное число" << endl;
		system("pause");
		system("cls");
	}
	system("pause");
	return 0;
}