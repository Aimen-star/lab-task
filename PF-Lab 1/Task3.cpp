#include<iostream>
using namespace std;
int main()
{
	cout<<"Employee Information:"<<endl;
	int employeeId;
	string name,department,jobTitle;
	cout<<"Name:";
	getline(cin,name);
	cout<<"Employee ID:";
	cin>>employeeId;
	cin.ignore();
	cout<<"Department:";
	getline(cin,department);
	cout<<"Job Title:";
	getline(cin,jobTitle);
	return 0;
}
