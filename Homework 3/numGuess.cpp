/*********************************
**Author: Jasmine Kim
**Date: 7/10/17
**Description: The program will prompt the user to input a number that someone else will try to guess. The program will use a loop to repeat the guesses until the person guesses correctly.
********************************/

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int number, guess;
	int numberOfGuesses = 0;
	
	cout << "Enter the number for the player to guess." << endl;
	cin >> number;
	cout << "Enter your guess." << endl;
	cin >> guess;
	
	do
	{
		if(guess > number){
			cout << "Too high - try again." << endl;
			//numberOfGuesses++;
		}else if(guess < number){
			cout << "Too low - try again." << endl;
			//numberOfGuesses++;
		}else{
			cout << "You guessed it in " << numberOfGuesses << "tries." << endl;
		}
	}while (guess != number);

	return 0;

}
		
