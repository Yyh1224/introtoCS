//============================================================================
// Name        : H34086115_hw5-2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int i, j, a;
	for ( i = 4; i >= 0; i--) {
	for ( j = 0; i > j; j ++) {
		cout << " ";
	}
	for ( a = 4; i < a; a --) {
		cout << "*";
	}
	cout << "*";
	for ( a = 4; i < a; a --) {
			cout << "*";
		}
	cout << endl;
	}
	for ( i = 3; i >= 0; i--) {
		for ( j = 3; i <= j; j --) {
			cout << " ";
		}
		for ( a = 0; i > a; a ++) {
			cout << "*";
		}
		cout << "*";
		for ( a = 0; i > a; a ++) {
			cout << "*";
		}
		cout << endl;
		}
}

