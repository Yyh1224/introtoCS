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
int main() {//���F��scope�j�}�L���٦��ƻ��k//�ոլݥέt���g// 
	{
	int x, y;
	cout<< "The smaller number is : "<< Compare(x,y)<<endl;
	}//with and without return?
	{
	char x, y;
	cout<< "The smaller number is : "<< Compare(x,y)<<endl;
	}//�o���J���Ȥ@�q�n�O�r���� �p�G�μƭȪ��ܷ|���� 
	{
	float x, y;
	cout<< "The smaller number is : "<< Compare(x,y)<<endl;
	}
}

