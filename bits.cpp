#include<iostream>
using namespace std;
int main()
{
	double mb,bits;
	cout<<"Enter Megabytes you have:";
	cin>>mb;
	bits=mb*1024*1024*8;
	cout<<mb<<" MB is equal to "<<bits<<" bits!"<<endl;
	return 0;
}