#include<iostream>
using namespace std;
int main()
{
	string password="savepass";
	string input;
	int attempt=1;
	do
	{
		cout<<"enter password:";
		cin>>input;
		if(input==password)
		{cout<<"correct password"<<endl;}
		else
		{cout<<"incorrect password"<<endl;}
		attempt++;		
	}
	while(attempt<=3);
	
	
	
	
}