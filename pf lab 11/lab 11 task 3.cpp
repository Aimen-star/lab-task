#include<iostream>
using namespace std;
struct greatestValue
{
	float value[20];
	float greatest;
};
int main()
{
	greatestValue find;
	cout<<"Enter 20 values: \n";
	for(int i=0;i<20;i++)
	{
		cin>>find.value[i];
	}
	find.greatest=find.value[0];
	for(int i=0;i<20;i++)
	{
		if(find.value[i]>find.greatest)
		{
			find.greatest=find.value[i];
		}
	}
	
	cout<<"The greatest value is: "<<find.greatest<<endl;
	return 0;
}