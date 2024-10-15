#include<iostream>
using namespace std;
int main()
{
	int hours,sec;
	cout<<"Enter number of hours:";
	cin>>hours;
	sec=hours*60*60;
	cout<<hours<<" Hours are equal to "<<sec<<" seconds!"<<endl;
	return 0;
}