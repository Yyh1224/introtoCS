//============================================================================
// Name        : H34086115_hw2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int num1, num2, num3;
			cout << "Input three different integers: " << endl;
			cin >> num1 >> num2 >> num3;
					cout << "sum is:" << num1+num2+num3 <<endl;
					cout << "average is:" << (num1+num2+num3)/3 <<endl;
			        cout << "product is:" << num1*num2*num3 << endl;
			if(num1 > num2 && num1 > num3){
				cout << "Smallest is:" << num3 <<endl;
				cout << "Largest is:" << num1 <<endl;
			}
			if(num1 > num3 && num3 > num2){
				cout << "Smallest is:" << num2 <<endl;
				cout << "Largest is:" << num1 <<endl;
						}
			if(num2 > num1 && num1 > num3){
				cout << "Smallest is:" << num3 <<endl;
				cout << "Largest is:" << num2 <<endl;
						}
			if(num2 > num3 && num3 > num1){
				cout << "Smallest is:" << num1 <<endl;
				cout << "Largest is:" << num2 <<endl;
						}
			if(num3 > num1 && num1 > num2){
				cout << "Smallest is:" << num2 <<endl;
				cout << "Largest is:" << num3 <<endl;
						}
			if(num3 > num2 && num2 > num1){
				cout << "Smallest is:" << num1 <<endl;
				cout << "Largest is:" << num3 <<endl;
						}

			return 0;
}
