#include "stdafx.h"
#include "FBullCowgame.h"

void FBullCowGame::Reset()
{
	return;
}

int FBullCowGame::GetMaxTries() const
{
	return MyMaxTries;
}

int FBullCowGame::GetCurrentTry()
{
	return MyCurrentTry;
}

bool FBullCowGame::IsGameWon()
{
	return false;
}

bool FBullCowGame::CheckGuessValidity(std::string)
{
	return false;
}
