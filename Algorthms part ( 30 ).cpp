

#include <iostream>
#include <string>

using namespace std;

int Read_enter_number( string print )
{
    int num;

    do
    {

        cout << print << endl;
        cin >> num;


    } while (num < 0);

    return num; 

}

int Factoeial( int num )
{
    int sum = 1 ;

    for (int i = num; i >= 1; i--)
    {


        sum = sum * i;

    }

    return  sum  ;

}


int main()
{



    cout << Factoeial(Read_enter_number("please enter a posstef number ?? "));




}