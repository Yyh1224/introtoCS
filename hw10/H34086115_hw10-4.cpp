#include <iostream>
#include <ctime>
#include <cstdlib>
 using namespace std;

int Question();
void Badcomment();
void Goodcomment();
int x, y;
int main() { 
	srand (time(0));
	int ans;
	for (;;) {
		int result = Question();
		cin >> ans;
		while(result != ans) {
			Badcomment();
			cout << endl;
			cout << "How much is "<< x<< " times "<<y<< "?";
			cin >> ans;
		}
		Goodcomment();
		cout << endl;
	}
	return 0;
}
int Question() {
	x= rand()%10; 
	y= rand()%10;
	cout << "How much is "<< x<< " times "<<y<< "?";
	return x*y;	
}
void Goodcomment(){
	int counter1 = 1 + rand()%4;
	switch(counter1)
	{
	case 1:
		cout<<" Very good! ";
		return ;
	case 2:
		cout<<" Excellent! ";
		return ;
	case 3:
		cout<<" Nice Work! ";
		return ;
	case 4:	
		cout<<" Keep up the good work!";
		return ;
	}
}
void Badcomment(){
	int counter2 = 1 + rand()%4;
	switch(counter2)
	{
	case 1:
		cout<<" No. Please try again. ";
		return ;
	case 2:
		cout<<" Wrong. Try once more. ";
		return ;
	case 3:
		cout<<" Don't give up! ";
		return ;
	case 4:	
		cout<<" No. Keep trying.";
		return ;
	}
}
