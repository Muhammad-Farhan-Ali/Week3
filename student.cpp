#include<iostream>
using namespace std;
int main()
{
	double agg;
	string name;
	int roll_no;
	char section;

	cout<<"Enter your name:";
	cin>>name;
	cout<<"Enter your aggregate:";
	cin>>agg;
	cout<<"Enter your roll no.:";
	cin>>roll_no;
	cout<<"Enter your section:";
	cin>>section;

	cout<<"*************"<<endl;
	cout<<"Student info:"<<endl;
	cout<<"*************"<<endl;
	cout<<"Name:"<<name<<endl;
	cout<<"Aggregate:"<<agg<<endl;
	cout<<"Roll No:"<<roll_no<<endl;
	cout<<"Section:"<<section<<endl;

	return 0;
}