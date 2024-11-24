#include<iostream>
using namespace std;
void printTempOpinion(int &temperature)
{
	if(temperature<0)
	{ cout<<"COLD"; }
	else if(temperature>=20 && temperature<=30)
	{ cout<<"OK"; }
	else if(temperature>30)
	{ cout<<"HOT"; }
	else
	{ cout<<"INVALID TEMPERATURE"; }
	}
int main()
{
	int temp;
	cout<<"Enter temperature:\n";
	cin>>temp;
	printTempOpinion(temp);
	return 0;
}