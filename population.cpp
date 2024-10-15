#include<iostream>
using namespace std;
int main()
{
	int current_population,birth_rate,final_population;
	cout<<"Enter current world population:";
	cin>>current_population;
	cout<<"Enter the monthly birth rate per year:";
	cin>>birth_rate;
	final_population=current_population+(birth_rate*12*30);
	//30 is used as three decades have 3*10 yaers
	cout<<"After three decades at rate of "<<birth_rate<<" per month current population will be "<<final_population;
	return 0;
}