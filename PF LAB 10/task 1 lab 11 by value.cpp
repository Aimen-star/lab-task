#include<iostream>
using namespace std;
  void swapnumbers(int a,int b)
{
	int temp=0;
	temp=a;
	a=b;
	b=temp;
	cout<<"Inside the function a="<<a<<" "<<"b="<<b<<endl;
	}
	int main()
{
	int x=5,y=6;
	cout<<"Before swapping: x="<<x<<" y="<<y<<endl;
	swapnumbers(x,y);
	cout<<"After swapping: x="<<x<<" y="<<y<<endl;
	return 0;
}