#include<iostream>
using namespace std;
int main()
{
	int secretnum=48;
	int guess;
	int i=0;
	do{
		cout<<"Guess a number:";
		cin>>guess;
		if(guess==secretnum)
		{cout<<"your guess is correct"<<endl;
		break;}
		else
		{cout<<"guess is incorrect"<<endl;}
		i++;}
		while(guess=secretnum);
		{cout<<"exist";}
	return 0;
}