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
	cout << "請輸入身高(m)" << endl;
	cin >> x ;
	cout << "請輸入體重(kg)" << endl;
    cin >> y ;
    if( y/(x*x)>24 )
    {
    	cout << "衣帶漸緊應需悔，為伊增得人煥發";
    }
    else if( y/(x*x) < 18.5 )
    {
    	cout << "哩甲修就，多吃點好嗎?";
    }
    else
    {
        cout << "穠纖合度，營養健康";
    }
	return 0;
}
