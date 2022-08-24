//============================================================================
// Name        : H34086115_hw2~2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int num1, num2, num3;
		cout << "please input five integers:";
		cin >> num1;
		for( int x=0; x<4; x++) {
			cin >> num2;
			if( num1 > num2) {
				num1 = num2;
			}
		    if( num1 < num2) {
			    num3 = num2;
			}
			}
			cout << "the smallest is: " << num1 << endl;
			cout << "the largest is: " << num3 << endl;
	return 0;
}
