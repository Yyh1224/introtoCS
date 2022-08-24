//============================================================================
// Name        : H34086115_hw6-3.cpp
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
	for (;;){
		cout << "I have a number between 1 and 1000." << endl;
		cout << "Can you guess my number?" << endl;
		cout << "Please type your first guess." << endl;
		cin >> guess;
		if (guess == num){
			cout << "Excellent! You guessed the number!" << endl;
			cout << "Would you like to play again(Y or N)?" << endl;
			cin >> selection;
			if (selection == 'Y'){
				continue;
			}
			else
				return 0;
		}
			else if (guess < num){
			cout <<"Too low. Try again." << endl;
			}
		else if (guess > num){
				cout <<"Too high. Try again." << endl;
			}
			}
		return 0;
}

