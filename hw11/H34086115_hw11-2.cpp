#include <iostream>
#include <ctime>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main() {
	srand(time(0));
	int array[12]={};//一樣跟身敦說的寧可浪類記憶體也不要讓程式碼變醜 
	
	for (int n = 0; n < 36000; n ++) {
		int die1 = rand()%6+1;
		int die2 = rand()%6+1;
		int sum = die1 + die2;
		array[sum]++;
	}
	cout << setw(3) << "sum  |"<< setw(7) << "times"<<endl;//setw()的用法是數自己然後多的才從左空格 
	cout << "———————" <<endl;
	for (int k = 2; k <= 12; k ++) {
		cout << setw(3) << k << "  |" << setw(7)<< array[k] <<endl;
	}
	return 0;
}
