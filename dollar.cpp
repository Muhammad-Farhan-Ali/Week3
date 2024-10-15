#include<iostream>
using namespace std;
int main()
{
	double rupees = 279.31;
	cout <<"$1=" << " Rs." << rupees << endl;
	double input_value;
	cout<<"Enter Dollars you own:";
	cin >> input_value;
	double converted_value = rupees * input_value; 
	cout <<"Total amount:Rs." << converted_value;
	return 0;
}