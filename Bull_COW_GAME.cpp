// Bull_COW_GAME.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;
void printIntro();
void playgame();
string GetGuess();
bool AskToPlayAgain();

//the entry point for our application
int main()
{
	bool bPlayAgain= false;
	do {
		printIntro();
		playgame();
		bPlayAgain = AskToPlayAgain();
		cout << endl;
	} while (bPlayAgain);
	return 0;
}


void playgame()
{
	//loop for asking the number of time for guesses
	constexpr int NumberOfTerms = 5;
	for (int count = 1; count <= NumberOfTerms; count++) {
		string Guess = " ";
			Guess = GetGuess();
		//repeat the guess back to them
		cout << "Your guess Was : " << Guess << endl;
		cout << endl;
	}
}


void printIntro()
{
	//introduce the game
	constexpr int WORD_LENGTH = 9;
	cout << "Welcome to Bulls and Cows.A fun Word game" << endl;
	cout << "can you guess the " << WORD_LENGTH;
	cout << " letter isogram i am thinking ?" << endl;
	cout << endl;
}
string GetGuess() {
	//get a guess from the player 
	cout << "Enter your Guess: ";
	string Guess = " ";
	//cin >> Guess;
	getline(cin, Guess);
	return Guess;
}

bool AskToPlayAgain()
{
	cout << "DO you Want to play again ? ";
	string Response = " ";
	getline(cin, Response);
	if ((Response[0] == 'y') || (Response[0] == 'Y'))
	{
		cout << "Let's play Again" << endl;
		return (Response[0] == 'y') || (Response[0] == 'Y');
	}
	else
	{
		cout << "OK, See you next time " << endl;
	}
	return 0;
}


