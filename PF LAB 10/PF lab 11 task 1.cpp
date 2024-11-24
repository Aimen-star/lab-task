#include<iostream>
using namespace std;
  void swapnumbers(int&a,int&b)
{
	int temp=0
	temp=a;
	a=b;
	b=temp;
	}
int main()
{
	int x,y;
	cout<<"Enter two numbers:\n";
	cin>>x>>y;
	cout<<"Before swapping: x="<<x<<" y="<<y<<endl;
	swapnumbers(x,y);
	cout<<"After swapping: x="<<x<<" y="<<y<<endl;
	return 0;
}
	
	