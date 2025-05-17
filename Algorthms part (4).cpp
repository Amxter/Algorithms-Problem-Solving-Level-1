

#include <iostream>
using namespace std;



int main()
{
	int Aga;
	bool draiveLicense;
	cout << "plaese enter a Aga ?? \n";
	cin >> Aga ;
	cout << "How has draive License ?? \n";
	cin >> draiveLicense ;

	if ( Aga > 21 && draiveLicense == true)

	{
		cout << " Hiard " ;
	}
	else
	{
		cout << "Rejected";
	}


}
