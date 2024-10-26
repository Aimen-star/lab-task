#include<iostream>
using namespace std;
int main()
{
	float celsius,faranheit;
	cout<<"Enter temperature in celsius:";
	cin>>celsius;
	faranheit=(celsius*9/5)+32;
	cout<<"Temperature in faranheit:"<<faranheit;
	return 0;
}