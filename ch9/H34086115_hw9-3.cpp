//============================================================================
// Name        : H34086115_hw9-3.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int gcd(int x, int y)
{
	if(y == 0)
	{
	        return x;
	}
	else
	{
		return gcd(y, x % y);
	}
}

int main()
{
     int x, y;

     cout << "Input x number: ";
     cin >> x;
     cout << "Input y number: ";
     cin >> y;
     if (x<y) {
	 cout << "x should be greater than y, try again"<<endl;
     cout << "Input x number: ";
     cin >> x;
     cout << "Input y number: ";
     cin >> y;
 	}

     cout << "Greatest common divisior is " << gcd(x, y) << endl;
     return 0;
}
