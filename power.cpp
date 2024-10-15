#include<iostream>
using namespace std;
int main()
{
	double volt,current,power;
	cout<<"Enter votalge (Volts):";
	cin>>volt;
	cout<<"Enter current (Amps):";
	cin>>current;
	power=current*volt;
	cout<<"Power is "<<power<<" Watts!"<<endl;
	return 0;
}