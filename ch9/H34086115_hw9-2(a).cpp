#include <iostream>
using namespace std;
//(,)how can we use this? what does this mean?
int fibonacci(); //���]�i�H��void�Ӱ� �o�˪��ܴN����return void���G�i�H����"return ;"  
int n;
int main() {
	cout <<"please enter n: ";
	cin >> n;
	fibonacci(); //cout �~�|��X�F�� �o�ӬO�I�s�ҥH���|�L�Xreturn�ƭ� 
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
