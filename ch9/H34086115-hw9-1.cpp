//============================================================================
// Name        : H34086115-hw9-1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;


int power(int, int);
int main() {
	int base, exponents;
	cout << "please enter a base and a exponents (>=1)" <<endl;
	cout << "base: " <<endl;
	cin >> base;
	cout << "exponents (>=1): " <<endl;
	cin >> exponents;
	cout << power(base, exponents);
}

int power(int base, int exponents) {
	if ( exponents == 0 )// when exponents=0 results equals to 1
		return 1;
	else{
		int result =1;// �]�w�@�Ӽƭȥh���o�H�K�u���@�Ӱʧ@
		for (int counter = 0 ; exponents > counter; counter++) {
			result = result*base;
			//return base*base;<<�o�Ӽg�k�̫�N�O�u�|���쥻��base*base�S���v�B�ĥ[�W
		}
		return result;
	}

}
