#include<iostream>
using namespace std;
int main()
{
	double charge,time,current;
	cout<<"Enter Charge in wire (Q):";
	cin>>charge;
	cout<<"Enter Time taken for charge to move (T):";
	cin>>time;
	current=charge/time;
	cout<<"Current (I) flowing through wire is:"<<current<<" Amp"<<endl;
	return 0;
}