#include <iostream>
using namespace std;

double fibonacci();
int n=0;
int main() {
	while ( n>=0 ){
		cout << fibonacci() << endl;
		n++;
	}
	   
	return 0;
}
double fibonacci() {
	double n1=0, n2=1, result=0;
	for ( int counter =0; counter <=n; counter++) {
		result += n1;
		n1 =n2;
		n2 =result;
		}
		cout <<"²Ä"<<n<<"¶µ";
		return result;
	}

