#include <iostream>
using namespace std;

int tripleByValue(int); //這個裡面的type是必要的的嗎 
void tripleByReference(int &);

int main() {
	int count;
	cout << " please enter a value : ";
	cin >> count;
	cout << " triple by value : ";
	cout <<tripleByValue(count)<<endl;
	cout << " origin value : ";
	cout<<count<<endl;
	tripleByReference(count);//這一行只有呼叫出來東西不是印出來!笨蛋 
	cout << " triple by reference : "<< count <<endl;	
	return 0;
}

int tripleByValue(int number) {
	return number*=number*number;
}
void tripleByReference(int &Refnumber) {
	Refnumber*=Refnumber*Refnumber;//pass by reference 的定義一訂要弄成void?如果今天是用int 結論跑出來一 依樣那電腦跑的意義相同嗎 
}

