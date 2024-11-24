#include<iostream>
using namespace std;
int largestnumber(int a,int b,int c)
{
	if(a>b && a>c)
	{ return a; }
	else if(b>a && b>c)
	{ return b; }
	else
	{ return c; }
	}
int main()
{
	int x, y,z ,largest;
	cout<<"Enter three numbers:\n";
	cin>>x>>y>>z;
	largest=largestnumber(x,y,z);
	cout<<"The largest numbers is:"<<largest<<endl;
	return 0;
}
	