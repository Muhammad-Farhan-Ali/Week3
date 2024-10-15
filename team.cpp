#include<iostream>
using namespace std;
int main()
{
	string team;
	int win,lose,draw,score;
	
	cout<<"Enter your team name:";
	cin>>team;
	cout<<"Enter number of matches won:";
	cin>>win;
	cout<<"Enter number of matches lost:";
	cin>>lose;
	cout<<"Enter number of matches drawn:";
	cin>>draw;

	score=(win*3)+(lose*0)+(draw*1);

	cout<<team<<" scored "<<score<<" points in the tournament!"<<endl;
	return 0;
}