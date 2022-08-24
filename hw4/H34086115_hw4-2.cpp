//============================================================================
// Name        : hwhw.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int i, j, square;
		cout << "please enter an integer of the side of the square(1~20)";
			cin >> square;
		if ( square > 20 || square < 1 ) {
			cout << "integer isn't between 1~20";
		}
		else {
			for ( i = 1; i <= square; i ++) {
				for ( j = 1; j <= square; j ++){
					if ( i == 1 || i == square){
					cout << "*";
					}
					else if ( j == 1 || j == square) {
						cout << "*";
					}
					else {
						cout << " ";
					}
				}
				cout << endl;
			}
		}
}
