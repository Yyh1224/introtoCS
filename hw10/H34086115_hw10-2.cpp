#include <iostream>
using namespace std;

template <class minimum>

minimum Compare( minimum num1, minimum num2 ){
	cout <<" please enter num1 : ";
	cin >> num1;
	cout <<" please enter num2 : ";
	cin >> num2;
	if ( num1 > num2 )
		return num2;
	else 
		return num1;
}
int main() {//除了用scope隔開他們還有甚麼方法//試試看用負號寫// 
	{
	int x, y;
	cout<< "The smaller number is : "<< Compare(x,y)<<endl;
	}//with and without return?
	{
	char x, y;
	cout<< "The smaller number is : "<< Compare(x,y)<<endl;
	}//這邊輸入的值一訂要是字母嗎 如果用數值的話會怎麼樣 
	{
	float x, y;
	cout<< "The smaller number is : "<< Compare(x,y)<<endl;
	}
}

