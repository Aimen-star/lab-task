#include<iostream>
using namespace std;
struct currency
{
	string type;
	float amount;
	float rate;
};
int main()
{
	currency C;
	cout<<"Enter the currency type(e.g Rupees, Euros, Pounds):\n";
	cin>>C.type;
	cout<<"Enter the amount in "<<C.type<<":";
	cin>>C.amount;
	cout<<"Enter the conversion rate to dollars: ";
	cin>>C.rate;
	float dollars=C.amount * C.rate; //covert to dollars
	cout<<"The amount in dollars is: $"<<dollars<<endl;
	if(C.type != "Rupees")
	{
		float rupees=dollars * 277;
		cout<<"The amount in rupees is: Rs"<<rupees<<endl;
	}
	return 0;
}