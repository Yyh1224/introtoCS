//============================================================================
// Name        : ¥¨¦K¹q¸£½Òstudy_1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

int rollDice();
int reaction();
int Bankbalance = 1000;
int main() {
	int wager=0, point=0;
	srand (time(0));
	enum Status { Continue, Win, Lose };
	Status gamestatus;
	cout << "please enter a wager : (<1000)";
	cin >> wager;
	while ( wager > 1000) {
		cout << "please reenter a wager : (<1000)";
		cin >> wager;
	}
	while ( Bankbalance!= 0 && Bankbalance > 0 ) {
	int sumofdice = rollDice();
	switch ( sumofdice ) {
		case 7:
		case 11:
			gamestatus = Win;
			break;
		case 2:
		case 3:
		case 12:
			gamestatus = Lose;
			break;
		default:
			gamestatus = Continue;
			break;
			point = sumofdice;
			break;
	}
	while ( gamestatus = Continue ) {
		int sumofdice = rollDice();
		if ( sumofdice == point )
			gamestatus = Win;
		else if ( sumofdice == 7 )
			gamestatus = Lose;
	}
	if ( gamestatus == Win ) {
		cout << "Player wins" << endl;
		Bankbalance += wager;
	    cout << Bankbalance <<endl;
	    cout << reaction();
	}
		else{
			cout << "Player loses" << endl;
			Bankbalance -= wager;
			cout << Bankbalance <<endl;
			cout << reaction();
		}
	}
}

int rollDice() {
	int dice1 = 1 + rand ()%6;
	int dice2 = 1 + rand ()%6;
	int sum = dice1 + dice2;
	cout << sum <<endl;
	return sum;
}
int reaction() {
	if ( Bankbalance == 0)
		cout << "Sorry, you busted!";
	else if ( Bankbalance < 0)
		cout << "Oh you're going for broke!";
	else if ( Bankbalance > 0 && Bankbalance < 500)
			cout << "keep going dude!";
	else if ( Bankbalance >= 500 && Bankbalance < 1000)
				cout << "you are almost there!";
	else if ( Bankbalance >= 1000)
			cout << "Now it's time to cash in your chips!";
	cout <<endl;
	return 0;
}

