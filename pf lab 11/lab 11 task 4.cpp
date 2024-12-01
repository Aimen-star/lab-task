#include<iostream>
using namespace std;
struct Budget
{
	string categories[3]={"Rent","Electricity","Gas"};
	float data[3][12];
};
int main()
{
	Budget B;
	cout<<"Enter the budget for Rent, Electricity, Gas for each month:\n";
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<12;j++)
		{
			cout<<"Enter values for:"<<B.categories[i]<<"Month: "<<j+1<<":";
			cin>>B.data[i][j];
		}
	}
	cout<<"Yearly budget table:\n";
	for(int i=0;i<3;i++)
	{
		cout<<B.categories[i]<<":";
		for(int j=0;j<12;j++)
		{
		cout<<B.data[i][j]<<":";	
		}
		cout<<endl;
	}
	return 0;
}