#include<iostream>
using namespace std;
int main()
{
	double matric,inter,ecat;
	string name;
	double agg;

	cout<<"Enter your Name:";
	//For space betwwen name use getline function
	getline(cin,name);
	cout<<"Enter marks in Matric (Out of 1100):";
	cin>>matric;
	cout<<"Enter marks in Intermidiate (Out of 560):";
	cin>>inter;
	cout<<"Enter marks in Ecat (Out of 400):";
	cin>>ecat;

	agg=(((0.25)*(matric/1100))+((0.45)*(inter/560))+((0.30)*(ecat/400)))*100;

	cout<<"Aggregate score of "<<name<<" is:"<<agg<<"%";
	return 0;
}
