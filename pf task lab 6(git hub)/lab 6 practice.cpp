#include<iostream>
using namespace std;
int main()
{
	int i=0;
	char choice;
	int avg;
	double temperature=0.0;
	double sum=0.0;
	cout<<endl;
	do
	{
		cout<<"Enter temperature:";
		cin>>temperature;
		sum=sum+temperature;
		i++;
		cout<<"Do you want to enter another?=";
		cin>>choice;
		cout<<endl;
	}
	while(choice=='Y');
	avg=sum/i;
	cout<<"avg of temp is"<<avg;
	return 0;
	
}