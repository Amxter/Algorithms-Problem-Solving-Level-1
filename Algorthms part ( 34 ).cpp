

#include <iostream>
using namespace std;

int Read_number()
{
	int TotalSales;
	cout << "please enter a Total Sales \n";
	cin >> TotalSales;

	return TotalSales;

}

float Gat_Comission_Percenrage(int TotalSales)
{
	if (TotalSales >= 1000000)
	{
		return  0.01 ; 
	}
	else if (TotalSales >= 500000 && TotalSales <= 1000000)
	{
		return 0.02;
	}
	else if (TotalSales >= 100000 && TotalSales <= 500000)
	{
		return 0.03;
	}
	else if (TotalSales >= 50000 && TotalSales <= 100000)
	{
		return 0.05;
	}
	else
	{
		return 0;
	}



}

float culcolater_total_Percenrage(int TotalSales)
{

	 return TotalSales* Gat_Comission_Percenrage(TotalSales);


}


int main()
{
	float TotalSales = Read_number(); 


	cout << endl << "Comission Percenrage = " << Gat_Comission_Percenrage(TotalSales) << endl ;
	cout << endl << "Total Percenrage = " << culcolater_total_Percenrage( TotalSales) << endl ;

}
