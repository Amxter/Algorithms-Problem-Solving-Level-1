
#include <iostream>
using namespace std;

void Read_Number(int &num1, int &num2)
{
    cout << "please enter a farst Number ?? " << endl ;
    cin >> num1;
    cout << "please enter a sucond Number ?? " << endl;
    cin >> num2 ;
}

int max_Number(int num1, int num2)
{
    if (num1 > num2)
        return  num1;
    else 
        return  num2 ;

}

void print_max_number(int Max_number)
{
    cout << "Max Number is : " << Max_number;

}

int main()
{
    int num1, num2;
    Read_Number(num1, num2);
    print_max_number(max_Number(num1, num2));
}

