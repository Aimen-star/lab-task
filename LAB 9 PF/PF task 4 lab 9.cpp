#include<iostream>
using namespace std;
int main()
 {
	int maxusers=15;
	int entryFee=300;
	int snackCost=400;
	int numusers;
	cout<<"How many students will attend the game night?(Maximum 15): ";
	cin>>numusers;
	if(numusers>maxusers)
	{
		cout<<"Error: Not more students are allowed";
		return 1;
	}
	string students[numusers];
	int totalcost=0;
	cin.ignore();  //To ignore neline character left in buffer 
	for(int i=0;i<numusers;i++)
	{
		cout<<"Enter name for Student["<<i+1<<"]:";
		getline(cin,students[i]);
		
	}
	cout<<"\nStudents name for event\n";
	for(int i=0;i<numusers;i++)
	{
		cout<<"Student["<<i+1<<"]:"<<students[i]<<endl;
	}
	cout<<"\nTotal cost for each student(entryFee + snackCost)"<<endl;
    for(int i=0;i<numusers;i++)
	{
		int studenttotalCost=entryFee + snackCost;
		totalcost+=studenttotalCost;
		cout<<students[i]<<":"<<entryFee+snackCost<<endl;
			}
			cout<<"\nTotal cost of each students:"<<totalcost<<endl;
			cout<<"PROGRAM END";
			return 0;		
	}