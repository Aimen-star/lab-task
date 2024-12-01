#include<iostream>
using namespace std;
struct contact
{
	string name;
	string address;
	string mobileNumber;	
};
int main()
{
	contact cont[10]={ {"Aira"   ,  "Address1" , "123456"},
	                   {"Aimen"  ,  "Address2" , "789564"},
					   {"Abrish" ,  "Address3" , "653972"},
					   {"Zoya"   ,  "Address4" , "872095"},
					   {"Mishal" ,  "Address5" , "825693"},
					   {"Mirha"  ,  "Address6" , "065428"},
					   {"Ayzal"  ,  "Address7" , "927683"},
					   {"Kainat" ,  "Address8" , "824638"},
					   {"Kiran"  ,  "Address9" , "376208"},
					   {"Kashaf" ,  "Address10", "975319 "} };
	char character;
	cout<<"Enter first character to search: ";
	cin>>character;
	character=tolower(character); //to make upper and lower case letter equal
	cout<<"Contacts with names starting with"<<character<<":\n";
	for(int i=0;i<10;i++)
	{
		if(tolower(cont[i].name[0])==character)
		{
			cout<<"Name: "<<cont[i].name<<", Address: "<<cont[i].address<<", Mobile Number: "<<cont[i].mobileNumber<<endl;
		}
	}
	return 0;
}