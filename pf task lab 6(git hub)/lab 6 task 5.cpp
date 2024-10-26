#include<iostream>
using namespace std;
int main()
{
	int n,i=1,sum=0;
	cout<<"enter a number:";
		cin>>n;
	do{
		sum+=i*i;
		i++;
	}
	while(i<=n);
	cout<<"the sum of squres of "<<n<<" natural number is "<<sum;
	
}