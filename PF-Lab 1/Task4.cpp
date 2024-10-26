#include<iostream>
using namespace std;
int main()
{
	int sapId,semester;
	string name,course;
	cout<<"Name:";
	getline(cin,name);
	cout<<"Sap id:";
	cin>>sapId;
	cout<<"Semester:";
	cin>>semester;
	cin.ignore();
	cout<<"Course:";
	getline(cin,course);
	
	
	return 0;
}
