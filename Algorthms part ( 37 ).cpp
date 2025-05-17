
#include <iostream>
#include <string>

using namespace std;

float Read_Number(string message)
{
    float num = 0; 

    cout << message << endl; 
    cin >> num;


    return num;

}

float sum_numbers()
{

    int num = 0, sum = 0, i = 1 ;

    do
    {
     
        num = Read_Number( "please enter a numbers "  + to_string(i) );
        
        if (num == -99)
        {
            break;
        }

        sum +=  num;

        i++;

    } while (num != -99);


    return sum;

}



int main()
{

    cout << "Result" << sum_numbers();

}


