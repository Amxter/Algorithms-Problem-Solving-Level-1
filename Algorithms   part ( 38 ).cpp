
#include <iostream>
#include <string>

using namespace std;

enum en_prim_Not_prim { prim = 1 , Not_prim = 2 };

float Read_positive_Number(string message)
{
    float num = 0;


    do
    {
        cout << message << endl;
        cin >> num;

    } while (num <= 0);


    return num;

}

en_prim_Not_prim Check_prime(int num)
{
     
    int M = round( num / 2);

    for (int counter = 2; counter  <=  M ; counter++)
    {

        if (num % counter == 0)
            return en_prim_Not_prim::Not_prim ;

    }

    return en_prim_Not_prim::prim ;

}

void print_prim (int num)
{

    switch ( Check_prime( num ) )
    {
    case en_prim_Not_prim::prim:

        cout << " numbers is prim ";

        break;
    case en_prim_Not_prim::Not_prim:

        cout << " numbers is Not prim ";
        break;

    }





}

int main()
{
    

    print_prim(Read_positive_Number("please enter a positive numbers ??"));



}

