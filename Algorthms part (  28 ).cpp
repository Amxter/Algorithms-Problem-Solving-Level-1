

#include <iostream>
using namespace std;

enum en_odd_even { odd = 1 , even = 2  };



int Read_number()
{
    int num;
    cout << "please enter a number ??   \n";
    cin >> num;
    return num;

}
en_odd_even check_odd_even(int num)
{
  

    if (num % 2 != 0)

      return  en_odd_even::odd;

    else

        return en_odd_even::even;

}
int sum_odd_number_using_while(int num)
{

    int sum = 0 , i = 1 ;
    cout << " \nsum odd number is while loop : " << endl;
    while ( num >= i )
    {
        
        if (check_odd_even(i) == en_odd_even::odd)
        {

            sum += i ;


        }
       i++;
    }


    return sum;

}
int sum_odd_number_using_for(int num)
{
    int sum = 0 ; 
    cout << " \nsum odd number is for loops : " << endl ;
    for (int i = 1; num >= i; i++)
    {

        if (check_odd_even(i) == en_odd_even::odd)
        { 
            sum += i;
        }

    }


    return sum ;

}
int sum_odd_number_using_do_while(int num)
{

    int sum = 0, i = 1;
    cout << " \nsum odd number is do loops : " << endl;
   do
    {
        
        if (check_odd_even(i) == en_odd_even::odd)
        {

            sum += i;


        }i++;
        
    } while (num >= i);


    return sum;

}


int main()
{
    int n = Read_number();
    cout << sum_odd_number_using_while(n ) << endl;
    cout << sum_odd_number_using_for(n) << endl;
    cout << sum_odd_number_using_do_while(n) << endl;


}
