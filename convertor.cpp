#include<iostream>
using namespace std;
int main()
{
	double pounds,kilos;
	cout<<"****************************"<<endl;
	cout<<"Pound to Kilogram Convertor!"<<endl;
	cout<<"****************************"<<endl;
	cout<<"Enter weight in Pounds(lbs):";
	cin>>pounds;
	kilos=pounds*(0.45);
	cout<<"Weight in Kilograms is:"<<kilos;
	return 0;
}