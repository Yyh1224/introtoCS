//============================================================================
// Name        : H34086115_hw5-1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int a, i = 1;
	double pi = 0, num, total ;
	for ( a = 1; a <= 1000; a ++ ){
		total = 2*a-1;
		num = 4/total;
		num = num*i;
		i = i*(-1);
		pi += num;
		cout << "term: " << a << " " << "\t" << "approximate value of pi: " << pi << endl;
	}
}
