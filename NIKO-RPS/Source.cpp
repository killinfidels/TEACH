#include "Header.h"

int main()
{
	do
	{
		system("cls");
		cout << "PLAYER ONE\n 1. ROCK\n 2. PAPER\n 3. SCISSORS\n";
		player1 = yourDad();

		system("cls");
		cout << "PLAYER TWO\n 1. ROCK\n 2. PAPER\n 3. SCISSORS\n";
		player2 = yourDad();

		if (player1 == justRUDE || player2 == justRUDE)
		{
			cout << "\none of you\nFUCKS\nFUCKED IT UP\nBY NOT FUCKING PLAYING ALONG\nYOU MOTHERFUCKERS BETTER KILL THE ONE WHO DID IT\n \n";
		}
		else
		{
			system("cls");
			switch (didWin(player1, player2))
			{
			case 0:
				cout << "PLAYER ONE WINS\n\n";
				break;
			case 1:
				cout << "PLAYER TWO WINS\n\n";
				break;
			default:
				cout << "IT'S A DRAW\n\n";
				break;
			}
		}

		cout << "DO YOU WANT TO TRY AGAIN?\n y/n\n";
		cin >> replay;
	} while (replay == 'y');

	return 0;
}