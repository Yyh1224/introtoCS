#include <iostream>
using namespace std;

int tripleByValue(int); //�o�Ӹ̭���type�O���n������ 
void tripleByReference(int &);

int main() {
	int count;
	cout << " please enter a value : ";
	cin >> count;
	cout << " triple by value : ";
	cout <<tripleByValue(count)<<endl;
	cout << " origin value : ";
	cout<<count<<endl;
	tripleByReference(count);//�o�@��u���I�s�X�ӪF�褣�O�L�X��!�³J 
	cout << " triple by reference : "<< count <<endl;	
	return 0;
}

int tripleByValue(int number) {
	return number*=number*number;
}
void tripleByReference(int &Refnumber) {
	Refnumber*=Refnumber*Refnumber;//pass by reference ���w�q�@�q�n�˦�void?�p�G���ѬO��int ���׶]�X�Ӥ@ �̼˨��q���]���N�q�ۦP�� 
}

