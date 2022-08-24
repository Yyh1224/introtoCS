//============================================================================
// Name        : H34086115_hw3(2).cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int counter = 1, number, largest = 0;
				while ( counter <= 10 ) {
					counter ++;
					cout << " please enter an integer ";
					cin >> number;
					while ( number > largest) {
						largest = number;
					}
				}
				cout << " the largest number is " << largest;
				return 0;

}
