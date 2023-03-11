// guessing game.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
Simple guessing game that with a fixed number

*/

#include <iostream>
using namespace std;

int main()
{
	int secretNum = 7;
	int guess = {};
	int guessCount = 0;
	int guessLimit = 3;
	bool outofGuess = false;


	while (secretNum != guess && !outofGuess) {
		if (guessCount < guessLimit) {
			cout << "Enter Guess: ";
			cin >> guess;
			guessCount++;
		}
		else
		{
			outofGuess = true;
		}
	}

	if (outofGuess) {
		cout << "You Lose";
	}
	else {

		cout << "You win";
	}
	
	return 0;

}
