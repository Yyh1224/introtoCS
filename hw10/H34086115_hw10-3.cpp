#include <iostream>
#include <ctime>
#include <cstdlib>//�ڧѰO�o�ӬO�ƻ�F >a library containing "rand"
 using namespace std;

int Question();

int x, y;
int main() {//�A���@�˪�scope�̭��n����ۤv�b�t�@�Ӧa��]���ܼƱa�i�� ��passbyreference 
	srand (time(0));//time interval concept
	int ans;
	for (;;) {
		int result = Question();//first time of random //�i�H��passbyreference�� 
		cin >> ans;
		while(result != ans) {
			cout << "No. Please try again "<<endl;
			cout << "How much is "<< x<< " times "<<y<< "?";
			cin >> ans;
		}
		cout << "Very good! "<<endl;
	}
	return 0;
}
int Question() {
	x= rand()%10; 
	y= rand()%10;
	cout << "How much is "<< x<< " times "<<y<< "?";
	return x*y;	//����k����return �i�H��void�g 
}


