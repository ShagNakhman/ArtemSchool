#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

void gamePole(char userPole[10][10], char pkPole[10][10])
{
	cout << "поле игрока" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << " ";
		for (int j = 0; j < 10; j++)
		{
			cout << " " << userPole[i][j];
		}
		cout << endl;
	}

	cout << endl << endl<<"поле бота"<<endl;

	for (int i = 0; i < 10; i++)
	{
		cout << " ";
		for (int j = 0; j < 10; j++)
		{
			cout << " " << pkPole[i][j];
		}
		cout << endl;
	}
}

int main()
{
	setlocale(LC_ALL, "");
	srand(time(0));

	char userPole[10][10];
	char pkPole[10][10];

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			userPole[i][j] = '0';
			pkPole[i][j] = '0';
		}
	}

	gamePole(userPole, pkPole);




	system("pause");
	return 0;
}




