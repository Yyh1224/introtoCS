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
	int number = 1;
	cout << "N*1"<<"\t"<< "N*10"<<"\t"<<"N*100"<<"\t"<<"N*1000"<<"\t";
	while ( number <= 5 ){
		cout << endl;
		cout << number*1 <<"\t"<< number*10<<"\t"<< number*100 <<"\t"<< number*100 <<"\t";
		number ++;
	}

}
