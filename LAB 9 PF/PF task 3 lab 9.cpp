#include<iostream>
using namespace std;
int main()
 {
	int maxusers=10;
	int ticketprice=300;
	int popcornprice=250;
	int numusers;
	cout<<"How many user will attent the qawali night: ";
	cin>>numusers;
	if(numusers>maxusers)
	{
		cout<<"Error: Not more users are allowed";
		return 1;
	}
	string users[numusers];
	int totalcost=0;
	cin.ignore();  //To ignore neline character left in buffer 
	for(int i=0;i<numusers;i++)
	{
		cout<<"Enter name for users["<<i+1<<"]:";
		
		getline(cin,users[i]);
		
	}
	cout<<"\nUser name for event\n";
	for(int i=0;i<numusers;i++)
	{
		cout<<"User["<<i+1<<"]:"<<users[i]<<endl;
	}
	cout<<"\nTotal cost for each user(Ticket + Popcorn)"<<endl;
    for(int i=0;i<numusers;i++)
	{
		int usertotalCost=ticketprice+popcornprice;
		totalcost+=usertotalCost;
		cout<<users[i]<<":"<<ticketprice+popcornprice<<endl;
			}
			cout<<"\nTotal cost of each users:"<<totalcost<<endl;
			cout<<"PROGRAM END";
			return 0;		
	}