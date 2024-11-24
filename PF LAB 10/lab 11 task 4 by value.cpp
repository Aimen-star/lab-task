#include<iostream>
using namespace std;
string printTempOpinion(int temperature)
{
	if(temperature<0)
	{ return "COLD"; }
	else if(temperature>=20 && temperature<=30)
	{ return "OK"; }
	else if(temperature>30)
	{ return "HOT"; }
	else
	{ return "INVALID TEMPERATURE"; }
	}
int main()
{
	int temp;
	cout<<"Enter temperature:\n";
	cin>>temp;
	string opinion=printTempOpinion(temp);
	cout<<"The temperature is:"<<opinion;
	return 0;
}