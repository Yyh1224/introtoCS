#include <iostream>
using namespace std;

int main() {
	
	int DE[20]={};
	int value[100+1]={};//�ڷQ�n���I��0~100�g�]���o�˷Pı������|����(��) >>�ŧi���ɭԬO���� 0~99 "+1">>���� 
	int k = 0;
	for ( k = 0; k < 20; k ++) {
		cout << "please eneter a number between 10 to 100 : ";
		cin >> DE[k];
		while ( DE[k] > 100 || DE[k] < 10) {
			cout << "please reneter a number between 10 to 100 : ";
			cin >> DE[k];
		}
		value[DE[k]]++;
		//*(vakue+100)++;
	}
	cout << endl;
	cout <<"unique value that you enetered: ";
	for ( k = 0; k < 20; k ++) {
		if (value[DE[k]] == 1) {
			cout <<DE[k]<<" ";
		}
	}

	return 0;
}
