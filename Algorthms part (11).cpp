
#include <iostream>
using namespace std;

enum en_pass_fila { pass= 1 , fila = 2 };

void Read_Mark(int& Mark, int& Mark2, int& Mark3)
{

	cout << "plase  enter a first Mark ?\n ";
	cin >> Mark;
	cout << "plase  enter a socand Mark ?\n ";
	cin >> Mark2;
	cout << "plase  enter a three Mark ?\n ";
	cin >> Mark3;


}

float calculeter_Averaje_Mark(int Mark1, int Mark2, int Mark3)
{


	return  (float)(Mark1 + Mark2 + Mark3) / 3;
}

en_pass_fila Check_Mark( float Average )
{
	if (Average >= 50)
		return en_pass_fila::pass;
	else
		return en_pass_fila::fila;
}

void print_Averaje_Mark(float Average)
{

	cout << endl << " Averaje Mark = " <<  Average << endl;
	if (Check_Mark(Average ) == en_pass_fila::pass)
		cout << " you pass " << endl  ;
	else 
		cout << " you fila " << endl  ;

}


int main()
{
	int  Mark1, Mark2, Mark3;
	Read_Mark(Mark1, Mark2, Mark3);
	print_Averaje_Mark(calculeter_Averaje_Mark(Mark1, Mark2, Mark3));

}