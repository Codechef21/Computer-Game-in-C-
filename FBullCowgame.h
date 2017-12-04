#pragma once
#include<string>

class FBullCowGame {
public:
	void Reset();//to make a more rich return value
	int GetMaxTries() const;
	int GetCurrentTry();
	bool IsGameWon();
	bool CheckGuessValidity(std:: string);



private: 
	int MyCurrentTry = 1;
	int MyMaxTries = 5;
	//bool IsIsogram(string);

};
