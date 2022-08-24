#include <iostream>
#include <iomanip> 
#include <cstdlib>
#include <ctime>

using namespace std;

const int Month = 12;
const int Temp = 2;

int getData(int [][Temp], int, int);
int averageHigh(int [][Temp], int, int);
int averageLow(int [][Temp], int, int);
int indexHighTemp(int [][Temp], int, int);
int indexLowTemp(int [][Temp], int, int);

int main() {
	srand(time(0));
	int Data[Month][Temp] = {};
	getData(Data, Month, Temp);
	cout << "average high temp: ";
	cout << averageHigh(Data, Month, Temp) << endl;//return & cout?
	cout << "average low temp: ";
	cout << averageLow(Data, Month, Temp) << endl;
	cout << "highest temp: ";
	cout << indexHighTemp(Data, Month, Temp) << endl;
	cout << "lowest temp: ";
	cout << indexLowTemp(Data, Month, Temp) << endl;
	return 0;
}

int getData( int temperature[][Temp], int, int){
	for ( int x=0; x < Month; x ++)
	{
		for (int y=0; y < Temp; y ++)
		{
			cout <<"please enter the temperature :";
			cin >> temperature[x][y];		
		}	
		if (temperature[x][0] < temperature[x][1])
			swap (temperature[x][0], temperature[x][1]);
	}
	for ( int x=0; x < Month; x ++)
	{
		for (int y=0; y < Temp; y ++)
		{
			cout <<temperature[x][y] <<" ";
		}	
		cout << endl;
	}
}

int averageHigh(int temperature[][Temp], int, int){//parameter也可以不要設新的，可以用舊的，對應位子會比較好對應 
	int total = 0;
	for ( int x = 0; x < Month; x ++)
	{
		for ( int y = 0; y < Temp; y ++)
		if ( y == 0)
		{
			total += temperature[x][y];
		}	
	}
	int AH = total / Month;
	return AH;
}

int averageLow(int temperature[][Temp], int, int){
	int total = 0;
	for ( int x = 0; x < Month; x ++)
	{
		for ( int y = 0; y < Temp; y ++)
		if ( y == 1)
		{
			total += temperature[x][y];
		}	
	}
	int AL = total / Month;
	return AL;
}

int indexHighTemp(int temperature[][Temp], int, int){//這一個最後印出來會有問題 
	int IHT = temperature[0][0];
	int y = 0;
		for ( int x = 0; x < Month; x ++)
		{	
			if ( IHT < temperature[x][y])
			{
				IHT = temperature[x][y];
			}		
		}
		return IHT;	
}

int indexLowTemp(int temperature[][Temp], int, int){//這一個最後印出來會有問題 
	int ILT = temperature[0][1];
	int y = 1;
			for ( int x = 0; x < Month; x ++)
			{	
				if ( ILT > temperature[x][y])
				{
					ILT = temperature[x][y];
				}	
			}
		return ILT;	
}

