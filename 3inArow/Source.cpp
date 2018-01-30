#include <iostream>
#include <string>

char board[3][3]
{
{ NULL, NULL, NULL},
{ NULL, NULL, NULL },
{ NULL, NULL, NULL }
};

bool getInput(std::string dad);
bool turn;
std::string myString;
int main()
{
	turn = true;
	bool loop = false;
	bool win = false;
	do
	{
		while (!win)
		{
			for (int i = 0; i < 3; i++)
			{
				for (int b = 0; b < 3; b++)
				{
					std::cout << " " << board[i][b];
				}
				std::cout << std::endl;
			}
			if (turn)
			{
				std::cout << "Player ones turn" << std::endl;
			}
			else
			{
				std::cout << "Player twos turn" << std::endl;
			}
			std::getline(std::cin, myString);

			if (getInput(myString))
			{
				for (int r = 0; r < 3; r++)
				{
					for (int c = 0; c < 3; c++)
					{
						if (board[r][c] == 'N')
						{
							if (turn)
							{
								board[r][c] = 'X';
								turn = !turn;
								r = 3;
								c = 3;
							}
							else
							{
								board[r][c] = 'O';
								turn = !turn;
								r = 3;
								c = 3;
							}
						}
					}
				}
			}
			else
			{
				std::cout << "yeah, no try again" << std::endl;
				loop = true;
			}
		}
		
	} while (loop);
}

bool getInput(std::string dad)
{
	int pos = 0, row = 0, col = 0;
	pos = dad.find_first_of("123");

	if (pos == std::string::npos)
	{
		std::cout << "urbad" << std::endl;
	}
	else
	{
		row = dad.at(pos);
		pos++;

		pos = dad.find_first_of("123", pos);

		if (pos == std::string::npos)
		{
			std::cout << "urbad2" << std::endl;
		}
		else
		{
			col = dad.at(pos);
			pos = 0;
			row = row - 1;
			col = col - 1;

			if (board[row][col] == NULL)
			{
				board [row] [col] = 'N';
				std::cout << 'N';
				return true;
			}
			else
			{
				return false;
			}
		}
	}

	return false;
}