

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

    for (int i = num ; i >= 1 ; i--)
    {
        cout << i << endl;


    }

}
void print_number_using_while(int num)
{

    

    cout << "Range printed using while statement : " << endl;
    while (num >= 1 )
    {
        cout << num << endl;

        num-- ;
    }


}
void print_number_using_do_while(int num)
{

    cout << "Range printed using while statement : " << endl;
    do
    {
        cout << num << endl;

        num-- ;
    } while (num >= 1);


}




int main()
{
    int n = Read_number();

    print_number_using_for(n);
    print_number_using_while(n);
    print_number_using_do_while(n);
}