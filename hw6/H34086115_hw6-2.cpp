//============================================================================
// Name        : H34086115_hw6-2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int flip();
int head = 0, tail = 0;
int main() {
    srand(time(0));
	for (int routine = 0; routine < 100; routine ++){
		if (flip() == 1) {
			cout << "head" << endl;
			head ++;
}
		else {
			cout << "tail" << endl;
			tail++;
}
	}
	cout << "heads: " << head << endl;
    cout << "tails: " << tail;
}
int flip(){
		int face = rand()%2;
		return face;//¬°¬Æ»ò¬Oreturn face

}
