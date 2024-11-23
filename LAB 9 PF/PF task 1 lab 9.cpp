#include<iostream>
using namespace std;
int main()
{
	int a[3];
	cout<<"Enter three values:\n";
	for(int i=0;i<3;i++)
	{
		cin>>a[i];
	}
	cout<<endl;
	cout<<"In Forward Order:\n";
	for(int i=0;i<3;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	cout<<"In Reverse Order\n";
	for(int i=2;i>=0;i--)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	
}