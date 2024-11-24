#include<iostream>
using namespace std;
int cube(int &a)
{
	a= a*a*a;
	
	}
int main()
{
	int x;
	cout<<"Enter a number:\n";
	while(true)
	{ cin>>x;
	if(x==0)
	break;
	cube(x);
	cout<<"Cube of a number is:" <<x<<endl;}
	return 0;
}
	
	