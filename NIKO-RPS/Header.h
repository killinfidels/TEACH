#pragma once
#include <iostream>
#include <windows.h>

using namespace std;

//list of possible moves
enum RPSmoves
{
	ROCK,
	PAPER,
	SCISSOR,
	justRUDE
};

//variable that can be assigned to something in the RPSmoves list
RPSmoves player1, player2;
//to replay or to not replay that is question
char replay;


int didWin(RPSmoves oneDude, RPSmoves twoDude)
{
	int win = 0;

	if (oneDude == twoDude)
	{
		win = 2;
	}
	else if (oneDude == SCISSOR && twoDude == ROCK)
	{
		win = 1;
	}
	else if (oneDude == PAPER && twoDude == SCISSOR)
	{
		win = 1;
	}
	else if (oneDude == ROCK && twoDude == PAPER)
	{
		win = 1;
	}

	return win;
}

RPSmoves yourDad()
{
	int myDad;

	cin >> myDad;

	switch (myDad)
	{
	case 1:
		return ROCK;
		break;
	case 2:
		return PAPER;
		break;
	case 3:
		return SCISSOR;
		break;
	default:
		return justRUDE;
		break;
	}
}