#include<iostream>
using namespace std;
int main()
{
	int a[2][3];
	cout<<"Enter values:\n";
	for(int i=0; i<2;i++)
	{
		for(int j=0;j<3;j++)
	{  
		cin>>a[i][j];
	}  
	}
	cout<<"Matrix without transpose:\n";
	for(int i=0; i<2;i++)
	{
		for(int j=0;j<3;j++)
	{
		cout<<a[i][j]<<" ";
	}  
	cout<<endl;
	}
	cout<<"Matrix with transpose:\n";
	for(int i=0; i<3;i++)
	{
		for(int j=0;j<2;j++)
	{
		cout<<a[j][i]<<" ";
	}  
	cout<<endl;
	}
		return 0;	
}
