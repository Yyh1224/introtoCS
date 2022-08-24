//============================================================================
// Name        : H34086115_hw4-3.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int a, b, c, d, e;
	cout << "please enter a five-digit integer";
	cin>> a;
	b = a/10000;
	c = a%10;
    d = a/1000 - b*10;
	e = ( a%100 - c) /10;
	if ( b == c && d == e){
		cout << "this integer is a palindrome";
	}
	else {
		cout << "this integer is not a palindrome";
	}
}
