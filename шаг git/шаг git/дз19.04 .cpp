//#include<iostream>
//#include<cstdlib>
//#include<string>
//#include<ctime>
//#include<queue>
//
//using namespace std;
//
//int main()
//{
//	setlocale(LC_ALL, "");
//	srand(time(0));
//
//
//	int chooseProg;
//	cout << "������� ����� ��������� �� ������ �������?" << endl
//		<< "1- �� ���" << endl
//		<< "2 - ���. ��" << endl
//		<< "0 - �����" << endl
//		<< "��� ����� = ";
//	cin >> chooseProg;
//
//	if (chooseProg == 1)
//	{
//		system("cls");
//		int *numbers;
//		int length;
//		int startDiapazon;
//		int endDiapazon;
//
//		/*� ���������� �������, ����������� ���������� �������, ����������
//			����������� � ������������ ��������.
//			2.���������� ������ ������ �������� �������.*/
//		cout << "� ���������� �������, ����������� ���������� �������, ����������" << endl
//			<< "����������� � ������������ ��������." << endl
//			<< "2.���������� ������ ������ �������� �������." << endl << endl;
//
//
//		do {
//			cout << "������� ����� ����� �� ������ ������" << endl
//				<< "��� ����� = ";
//			cin >> length;
//			if (length < 1)
//			{
//				cout << "�� ����������� ����� ������ �������" << endl;
//				system("pause");
//				system("cls");
//			}
//		} while (length < 1);
//		system("cls");
//		numbers = new int[length];
//
//		do {
//			cout << "������� �������� ��� �������" << endl
//				<< "������ ��������� - ";
//			cin >> startDiapazon;
//			cout << "����� ��������� - ";
//			cin >> endDiapazon;
//		} while (endDiapazon < startDiapazon);
//
//		for (int i = 0; i < length; i++)
//		{
//			numbers[i] = rand() % endDiapazon + startDiapazon;
//		}
//		system("cls");
//
//		int minNum = numbers[0];
//		int maxNum = numbers[0];
//		//����������� � ������������ �����
//		for (int i = 1; i < length; i++)
//		{
//			if (minNum > numbers[i])
//			{
//				minNum = numbers[i];
//			}
//		}
//		for (int i = 0; i < length; i++)
//		{
//			if (maxNum < numbers[i])
//			{
//				maxNum = numbers[i];
//			}
//		}
//
//
//		cout << "������ ������� �� " << endl;
//		for (int i = 0; i < length; i++)
//		{
//			cout << numbers[i] << " ";
//		}
//		cout << endl << "����������� ����� � ������� = " << minNum << endl
//			<< "������������ ����� � ������� = " << maxNum << endl
//			<< "������ ����� � ������� = ";
//
//		//������� ������ �����
//		for (int i = 0; i < length; i++)
//		{
//			if (numbers[i] % 2 == 0)
//			{
//				cout << numbers[i] << " ";
//			}
//		}
//		cout << endl;
//		system("pause");
//		system("cls");
//
//		/*������������ ������ ������� ����� �� ��� (12 �������-12�����). ����� ������������
//		������ ��������(��������, 3 � 6 � ����� ����� 3 - � � 6 - � �������).���������� ����������
//		�����, � ������� ������� ���� ����������� � �����, � ������� ������� ���� ���������� �
//		������ ���������� ���������.*/
//		int firmProfit[12];
//		int profitYear;
//		cout << "�������:������������ ������ ������� ����� �� ��� (12 �������-12�����). ����� ������������" << endl
//			<< "������ ��������(��������, 3 � 6 � ����� ����� 3 - � � 6 - � �������).���������� ����������" << endl
//			<< "�����, � ������� ������� ���� ����������� � �����, � ������� ������� " << endl
//			<< "���� ���������� c ������ ���������� ���������." << endl << endl;
//
//		do {
//			cout << "������� ������� �� ���" << endl
//				<< "��� ����� = ";
//			cin >> profitYear;
//		} while (profitYear < 1);
//
//		for (int i = 0; i < 12; i++)
//		{
//			firmProfit[i] = rand() % profitYear;
//		}
//
//		do {
//			cout << "������� �������� ������ �� 1 �� 12" << endl
//				<< "������ ��������� - ";
//			cin >> startDiapazon;
//			cout << "����� ��������� - ";
//			cin >> endDiapazon;
//			if (endDiapazon >= 13 || startDiapazon <= 0)
//			{
//				cout << "�� ����� ������������ ��������" << endl;
//				system("pause");
//			}
//			system("cls");
//		} while (endDiapazon < startDiapazon || endDiapazon >= 13 || startDiapazon <= 0);
//
//		int minProfit = firmProfit[startDiapazon], maxProfit = firmProfit[startDiapazon];
//		int monthMinProfit = startDiapazon, monthMaxProfit = startDiapazon;
//
//
//		// ������� ���������� �������
//		for (int i = startDiapazon++; i < endDiapazon; i++)
//		{
//			if (maxProfit < firmProfit[i])
//			{
//				maxProfit = firmProfit[i];
//				monthMaxProfit = i;
//			}
//			if (minProfit > firmProfit[i])
//			{
//				minProfit = firmProfit[i];
//				monthMinProfit = i;
//			}
//
//
//		}
//
//		cout << "������ ������� �� ���������" << endl;
//		for (int i = 0; i < size(firmProfit); i++)
//		{
//			cout << firmProfit[i] << " ";
//		}
//		cout << endl << "����������� ������� ���� � " << monthMinProfit + 1
//			<< " ������" << endl << " � ���������� " << minProfit << endl
//			<< "������������ ������� ���� � " << monthMaxProfit + 1
//			<< "������" << endl << " � ���������� " << maxProfit << endl;
//		system("pause");
//		system("cls");
//
//		/*� ���������� �������, ��������� �� N ����� ����� ���������:
//		� ����� ������������� ���������.
//		� ������������ ���������, ����������� ����� min � max ����������.
//		� ������������ ��������� � ������� ��������.
//		� ����� ���������, ����������� ����� ������ � ��������� ��������������
//		����������.*/
//
//		
//		int sumNegativeNum = 0;
//		cout << "� ���������� �������, ��������� �� N ����� ����� ���������:" << endl
//			<< "� ����� ������������� ���������." << endl
//			<< "� ������������ ���������, ����������� ����� min � max ����������." << endl
//			<< "� ������������ ��������� � ������� ��������." << endl
//			<< "� ����� ���������, ����������� ����� ������ � ��������� ��������������" << endl
//			<< "����������." << endl << endl;
//
//		do {
//			cout << "������� ����� ����� �� ������ ������" << endl;
//			cin >> length;
//			if (length < 1)
//			{
//				cout << "�� ����������� ����� ������ �������" << endl;
//				system("pause");
//				system("cls");
//			}
//		} while (length < 1);
//		system("cls");
//		numbers = new int[length];
//
//		//�������� ��������� ����� � ������
//		
//		cout << "������� ����� ����� ����� ��������� � �������(��� �������)" << endl
//			<< "������� ������ ��������(����� ������������� �����) - ";
//		cin >> startDiapazon;
//		cout << "������� ����� ���������(����� ������������� �����) - ";
//		cin >> endDiapazon;
//		system("cls");
//		
//		int schet = 0;
//		int compositionEvenNum = 1;
//		for (int i = 0; i < length; i++)
//		{
//			numbers[i] = rand() % (endDiapazon - startDiapazon) + startDiapazon; 
//			
//		}
//
//		int minNumber = numbers[0], maxNumber = numbers[0];
//
//
//		int coordinatesMinNum, coordinatesMaxNum;
//		int compositionNumberBetweenCoordinates = 0;
//
//		int MinNegativeNum = minNumber, maxNegativeNum = numbers[0];
//		int coordinateMinNegativeNum = 0, coordiinateMaxNegativeNum = 0;
//		int compositionBetweenNegativeNum = 0;
//
//		//����� �������������� �����
//		for (int i = 0; i < length; i++)
//		{
//			//����� ������������� �����
//			if (numbers[i] < 0)
//			{
//				sumNegativeNum += numbers[i];
//			}
//			//����������� � ������������ �����
//			if (minNumber < numbers[i])
//			{
//				minNumber = numbers[i];
//			}
//			if (maxNumber > numbers[i])
//			{
//				maxNumber = numbers[i];
//			}
//			//������������ ������ ����� 
//			if (numbers[i] % 2 == 0)
//			{
//				compositionEvenNum *= numbers[i];
//			}
//		}
//
//
//		for (int i = 0; i < length; i++)
//		{
//			if (minNumber == numbers[i])
//			{
//				coordinatesMinNum = i;
//			}
//			if (maxNumber == numbers[i])
//			{
//				coordinatesMaxNum = i;
//			}
//			if (MinNegativeNum > numbers[i] && numbers[i] < 0)
//			{
//				
//				coordinateMinNegativeNum = i;
//			}
//			if (maxNegativeNum > numbers[i] && numbers[i] < 0)
//			{
//				
//				coordiinateMaxNegativeNum = i;
//			}
//		}
//
//		for (int i = coordinateMinNegativeNum; i <= coordiinateMaxNegativeNum; i++)
//		{
//			compositionBetweenNegativeNum += numbers[i];
//		}
//
//
//		//������������� ����� ����� ����������� � ������������ ������
//		for (int i = coordinatesMinNum; i <= coordinatesMaxNum; i++)
//		{
//			compositionNumberBetweenCoordinates += numbers[i];
//		}
//
//		cout << "������ ������� �� ���������" << endl;
//		for (int i = 0; i < length; i++)
//		{
//			cout << numbers[i] << " ";
//		}
//		cout << endl << "����� ������������� ����� = " << sumNegativeNum << endl
//			<< "(�� ����� ���������)������������ ����� ����� ����������� � ������������ ������ = " << compositionNumberBetweenCoordinates << endl
//			<< "(�� ����� ���������)������������ ������ ����� = " << compositionEvenNum << endl
//			<< "������������ ����� ����� ����������� � ������������ ������������� ������ = " << compositionBetweenNegativeNum << endl;
//
//	}
//	else if (chooseProg == 2)
//	{
//		int numbers[2][5];
//		
//		int NumberStep;
//		int startDiapazon, endDiapazon;
//		int stepProvisions;
//		int schetNum = 0; 
//		system("cls");
//		do {
//			cout << "������� �������� ������ �� 1 �� 12" << endl
//				<< "������ ��������� - ";
//			cin >> startDiapazon;
//			cout << "����� ��������� - ";
//			cin >> endDiapazon;
//			system("cls");
//		} while (endDiapazon < startDiapazon);
//
//		
//		for (int i = 0; i < 2; i++)
//		{
//			for (int j = 0; j < 5; j++)
//			{
//				numbers[i][j] = rand() % endDiapazon + startDiapazon;
//
//			}
//		}
//		do {
//			do
//			{
//				cout << "�������� � ����� ������� ������ �����" << endl
//					<< "1 - �����" << endl
//					<< "2 - ������" << endl
//					<< "3 - ����" << endl
//					<< "4 - �����" << endl;
//				cin >> stepProvisions;
//				do
//				{
//					if (stepProvisions == 1 || stepProvisions == 2)
//					{
//						cout << "������� �� ������� �� ������ �����������" << endl;
//						cin >> NumberStep;
//					}
//				} while (NumberStep < 1 || NumberStep>5);
//
//			} while (stepProvisions < 1 || stepProvisions >4);
//
//			queue<int> arr;
//			switch (stepProvisions)
//			{
//			case 1:
//				break;
//			case 2:
//				int *temporaryExit;
//				temporaryExit = new int[NumberStep];
//				int temporary;
//				int temporaryArray[2][5];
//
//				for (int i = 0; i < NumberStep; i++)
//				{
//					temporaryExit[i] = numbers[1][4 - i];
//				}
//				// ������� �������
//				for (int i = 0; i < 2; i++)
//				{
//					for (int j = 0; j < 5; j++)
//					{
//						arr.push(numbers[i][j]);
//					}
//				}
//
//
//				for (int i = 0, schet = 0, e = 0; e < 3; i++, e++)
//				{
//					if (e >= 2)
//					{
//						i = 0;
//					}
//					if (schet == 4 || e >= 2)
//					{
//						break;
//					}
//
//					for (int j = 0, k = 0; k < 5; j++, k++)
//					{
//						if (j + (stepProvisions - 1) > 5)
//						{
//							j = stepProvisions*-1;
//							schet++;
//						}
//						if (schet == 4)
//						{
//							break;
//						}
//						temporaryArray[i][j + (stepProvisions)] = arr.front();
//
//						arr.pop();
//						if (i == 2)
//						{
//							temporaryArray[0][(stepProvisions*-1) + stepProvisions] = arr.front();
//							arr.pop();
//							schetNum++;
//						}
//					}
//				}
//
//				cout << "����������� ������" << endl;
//				for (int i = 0; i < 2; i++)
//				{
//					for (int j = 0; j < 5; j++)
//					{
//						cout << numbers[i][j] << " ";
//					}
//					cout << endl;
//				}
//				cout << endl;
//				for (int i = NumberStep - 1; i >= 0; i--)
//				{
//					cout << temporaryExit[i] << " ";
//				}
//				for (int i = NumberStep; i < 5; i++)
//				{
//					cout << temporaryArray[0][i] << " ";
//				}
//				for (int j = 0; j < 5; j++)
//				{
//					cout << temporaryArray[1][j] << " ";
//				}
//
//				break;
//			case 3:
//				int temporaryArraya[5];
//				for (int i = 0; i < 5; i++)
//				{
//					temporaryArraya[i] = numbers[0][i];
//				}
//				for (int i = 0; i < 5; i++)
//				{
//					numbers[0][i] = numbers[1][i];
//					numbers[1][i] = temporaryArraya[i];
//				}
//				for (int i = 0; i < 2; i++)
//				{
//					for (int j = 0; j < 5; j++)
//					{
//						cout << numbers[i][j] << " ";
//					}
//				}
//				break;
//			case 4:
//				int temporaryArrayaa[5];
//				for (int i = 0; i < 5; i++)
//				{
//					temporaryArrayaa[i] = numbers[0][i];
//				}
//				for (int i = 0; i < 5; i++)
//				{
//					numbers[0][i] = numbers[1][i];
//					numbers[1][i] = temporaryArrayaa[i];
//				}
//				for (int i = 0; i < 2; i++)
//				{
//					for (int j = 0; j < 5; j++)
//					{
//						cout << numbers[i][j] << " ";
//					}
//				}
//				break;
//			default:
//				break;
//			}
//
//		} while (true);
//	}
//	else if (chooseProg == 0)
//	{
//		exit(chooseProg == 0);
//	}
//	else
//	{
//		cout << "�� ����� ������������ �����" << endl;
//		system("pause");
//		system("cls");
//	}
//	system("pause");
//	return 0;
//}