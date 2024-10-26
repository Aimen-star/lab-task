#include<iostream>
using namespace std;
int main()
{
	string menu;
	char choice;
	do
	{
		cout<<"Menu"<<endl;
		cout<<"1.chinese rice"<<endl;
		cout<<"2.Biryani"<<endl;
		cout<<"3.cold drink"<<endl;
		cout<<"4.Sandwich"<<endl;
		cout<<"5.juice"<<endl;
		cout<<"Enter your menu";
		cin>>menu;
		cout<<"do you want to enter more menu:";
		cin>>choice;
		if(menu!="1" && menu!="2" && menu!="3" && menu!="4" && menu!="5" )
		{cout<<"invalid menu"<<endl;
		
		}
	}
	while(choice=='y' || choice=='Y');
	
}