

#include <iostream>
using namespace std;


int Read_number()
{
	int  num;
	cout << "plaese enter a numbar ?\n";
	cin >> num;

	return num;

}

int Read_power()
{
	int  power;
	cout << "plaese enter a power ?\n";
	cin >> power;

	return power;

}


int powre_of_M(int num , int power)
{

    int p = 1;

    if ( power == 0 )
    {

        return 1 ;
    }

    for (int i = 1; power >= i; i++)
    {


        p = p * num;
    }


    return p ; 


}


int main()
{


    cout << endl << "Result = " << powre_of_M(Read_number(), Read_power());



}


