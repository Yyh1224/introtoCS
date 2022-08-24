#include <iostream>
using namespace std;
//(,)how can we use this? what does this mean?
int fibonacci(); //其實也可以用void來做 這樣的話就不用return void結果可以直接"return ;"  
int n;
int main() {
	cout <<"please enter n: ";
	cin >> n;
	fibonacci(); //cout 才會輸出東西 這個是呼叫所以部會印出return數值 
	return 0;
}
int fibonacci() {
	int  n1=0, n2=1, result=0, counter;
		cout << n1<<endl;
		cout << n2<<endl;
	for ( counter =0; counter <n-2; counter++) {
		result = n1+n2;
		n1 =n2;
		n2 =result;
		cout << result<<endl;
		}
		return 0; 
	}	
