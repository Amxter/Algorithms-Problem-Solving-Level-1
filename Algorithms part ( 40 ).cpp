


#include <iostream>
using namespace std;

float Read_TotalBill_Number(string message)
{
    float num = 0;


    do
    {
        cout << message << endl;
        cin >> num;
d
    } while (num <= 0);


    return num;

}

float Total_Bill_after_service_sales_tax( float TotalBill)
{

    int x = TotalBill*1.10  ;
    return x * 1.16 ;
}


int main()  
{

    float TotalBill = Read_TotalBill_Number("please enter a Total Bill ? ");
   


    cout << "\n\nTotal Bill = " << TotalBill << endl;
    cout << "Total Bill after service fee and sales tax  = " <<
        Total_Bill_after_service_sales_tax(TotalBill);


}


 