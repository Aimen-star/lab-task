#include<iostream>
using namespace std;
void largestnumber(int a,int b,int c,int &largest)
{
	if(a>b && a>c)
	largest=a;
	else if(b>a && b>c)
	largest=b;
	else
	largest=c;
	}
int main()
{
	int x,y,z,largest;
	cout<<"Enter three numbers:\n";
	cin>>x>>y>>z;
	largestnumber(x,y,z,largest);
	cout<<"The largest numbers is:"<<largest<<endl;
	return 0;
}
	