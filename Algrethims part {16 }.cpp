
#include <iostream>
using namespace std; 

float Area(float num1 , float num2)
{
    

    return  (num1 * sqrt(pow(num2, 2) - pow(num1, 2)));

}


int main()
{

    float num1, num2; 

    cout << "plaese enter a long num1 ?\n  ";
    cin >> num1 ;
    cout << "plaese enter a long num2 ?\n\n  ";
    cin >> num2 ;

    cout << Area(num1, num2);


}

