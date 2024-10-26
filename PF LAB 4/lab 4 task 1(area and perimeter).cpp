#include<iostream>
using namespace std;
int main()
{
	double length,width,area,perimeter;
	cout<<"Enter length:";
	cin>>length;
	cout<<"Enter width:";
	cin>>width;
	area=length*width;
	cout<<"Area is:"<<area<<endl;
	perimeter=2*(length+width);
	cout<<"Perimeter is:"<<perimeter<<endl;
	return 0;
}