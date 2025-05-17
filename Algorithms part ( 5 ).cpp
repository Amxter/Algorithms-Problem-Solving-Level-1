

#include <iostream>
using namespace std;

struct st_Info {

	short Aga;
	bool Has_Draive_Listy;
	bool Has_Recommendation;
};

st_Info Read_Info()
{
	st_Info Info;
	cout << "please enter your Aga ?? " << endl;
	cin >> Info.Aga;
	cout << "please enter your Has Draive Listy true / folse ?? " << endl;
	cin >> Info.Has_Draive_Listy;
	cout << "please enter your Wasta true / folse ?? " << endl;
	cin >> Info.Has_Recommendation ;

	return Info;
}

bool x(st_Info Info)
{
	return ((Info.Aga > 21 && Info.Has_Draive_Listy) ||  Info.Has_Recommendation );

}

void print_Result(st_Info Info)
{
	if (x(Info))
	{
		cout << "\n Hired \n ";

	}
	else
	{
		cout << "\n Rejrcted \n ";

	};
}

int main()
{

	print_Result(Read_Info());

}