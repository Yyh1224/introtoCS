//============================================================================
// Name        : H34086115(1).cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
    float  x,y ;
	cout << "�п�J����(m)" << endl;
	cin >> x ;
	cout << "�п�J�魫(kg)" << endl;
    cin >> y ;
    if( y/(x*x)>24 )
    {
    	cout << "��a�������ݮ��A����W�o�H�صo";
    }
    else if( y/(x*x) < 18.5 )
    {
    	cout << "���ҭ״N�A�h�Y�I�n��?";
    }
    else
    {
        cout << "ª�֦X�סA��i���d";
    }
	return 0;
}
