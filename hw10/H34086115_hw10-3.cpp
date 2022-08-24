#include <iostream>
#include <ctime>
#include <cstdlib>//我忘記這個是甚麼了 >a library containing "rand"
 using namespace std;

int Question();

int x, y;
int main() {//再不一樣的scope裡面要怎麼把自己在另一個地方設的變數帶進來 傳passbyreference 
	srand (time(0));//time interval concept
	int ans;
	for (;;) {
		int result = Question();//first time of random //可以用passbyreference做 
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
	return x*y;	//有辦法不用return 可以用void寫 
}


