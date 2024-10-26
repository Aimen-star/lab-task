#include<iostream>
using namespace std;
int main()
{
	int age;
	cout<<"Enter your age:";
	cin>>age;
	if(age>18)
	{
		cout<<"you are an adult";
	}
	else
	{
		cout<<"you are a minor";
	}
	return 0;
}