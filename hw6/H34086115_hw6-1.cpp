//============================================================================
// Name        : H34086115_hw6-1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int qualityPoints(int);
int main(){
	int ave;
	cout << "Enter student's average (between 0 ~ 100): " << endl;
	cin >> ave;
	while(ave < 0 || ave > 100){
		cout << "Enter  an average which is between 0 ~ 100: ";
		cin >> ave;
	}
	cout << qualityPoints(ave);
	return 0;
}
int qualityPoints(int ave){
	if(ave >= 90)
		return 4;
	else if( ave >= 80)
		return 3;
	else if(ave >= 70)
		return 2;
	else if(ave >= 60)
		return 1;
	else
		return 0;
}
