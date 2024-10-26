#include<iostream>
using namespace std;
int main()
{	int avg;
	int math,english,urdu;
	cout<<"Enter a marks of math:";
	cin>>math;
	cout<<"Enter a marks of english:";
	cin>>english;
	cout<<"Enter a marks of urdu:";
	cin>>urdu;
	avg=(math + english + urdu) / 3;
	cout<<"Average is:"<<avg<<endl;
	if(avg>=90){
		cout<<"Grade A";}
	else if(avg>=80){
		cout<<"Grade B";}
	else if(avg>=70){
	cout<<"Grade C";}
	else if(avg>=60){
	cout<<"Grade D";}
     else{
	cout<<"Grade F";	}
	return 0;}