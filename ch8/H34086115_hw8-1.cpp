//============================================================================
// Name        : H34086115_hw8.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstdlib>//srand and random
#include <ctime>
using namespace std;

int main() {
	srand (time(0));
	int guess;
	int num = 1 + rand()%1000;
	char selection;
	int counter = 0;
	for (;;){
		cout << "I have a number between 1 and 1000." << endl;
		cout << "Can you guess my number?" << endl;
		cout << "Please type your first guess." << endl;
		cin >> guess;
		if (guess == num){
			cout << "Excellent! You guessed the number!" << endl;
			counter++;
			if ( counter < 10){
		cout << "Either you know the secret or you got lucky!" << endl;
			}
			else if ( counter == 10){
		cout << "Ahh! You know the secret!" << endl;
			}
			else
		cout << "You should be able to do better!" << endl;
			cout << "Would you like to play again(Y or N)?" << endl;
			cin >> selection;
			if (selection == 'Y'){
				continue;
			}
			else
				return 0;
		}
	    if (guess < num){
			cout <<"Too low. Try again." << endl;
			counter++;
			}
		else if (guess > num){
				cout <<"Too high. Try again." << endl;
				counter++;
			}
	}

		return 0;
}

