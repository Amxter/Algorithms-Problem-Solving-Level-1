
#include <iostream>
using namespace std;

void Read_Mark(int& Mark, int& Mark2, int &Mark3 )
{

	cout << "plase  enter a first Mark ?\n ";
	cin >> Mark ;
	cout << "plase  enter a socand Mark ?\n ";
	cin >> Mark2 ;
	cout << "plase  enter a three Mark ?\n ";
	cin >> Mark3;

	
}

float calculeter_Averaje_Mark(int Mark1, int Mark2, int Mark3 )
{


	return  (float)(Mark1 + Mark2 + Mark3) / 3;
}

void print_Averaje_Mark(int sum)
{

	cout << endl << " Averaje Mark = " << sum << endl;

}

int main()
{
	int  Mark1, Mark2, Mark3;
	Read_Mark(Mark1, Mark2, Mark3 );
	print_Averaje_Mark(calculeter_Averaje_Mark(Mark1, Mark2, Mark3));

}



