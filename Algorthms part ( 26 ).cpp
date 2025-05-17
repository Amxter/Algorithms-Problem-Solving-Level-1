

#include <iostream>

using namespace std;

int Read_number()
{
    int num;
    cout << "please enter a number ??   \n";
    cin >> num;
    return num; 

}

void print_number_using_for(int num)
{

    cout << "Range printed using for loop : " << endl;
    for (int i = 1 ; i <= num ; i++)
    {
        cout << i << endl; 


    }

}
void print_number_using_while(int num)
{

    int i = 1; 
    
    cout << "Range printed using while statement : " << endl;
    while (num >= i)
    {
        cout << i << endl;

        i++;
    }


}
void print_number_using_do_while(int num)
{

    int i = 1;

    cout << "Range printed using while statement : " << endl;
    do
    {
        cout << i << endl;

        i++;
    } while (num >= i);


}




int main()
{
    int n = Read_number();

    print_number_using_for(n);
    print_number_using_while(n);
    print_number_using_do_while(n);
}


