#include<iostream>
using namespace std;
struct product
{
	int code;
	string description;
	char packaging;
	float price;
	float discount;
};
int main()
{
	product prod[10]={{123,"product1",'S',200,2},
	                  {124,"product2",'L',600,2},
	                  {125,"product3",'M',500,2},
	                  {126,"product4",'L',600,2},
	                  {127,"product5",'M',500,2},
					  {128,"product6",'S',200,2},
					  {129,"product7",'M',700,2},
					  {120,"product8",'L',800,2},
					  {122,"product9",'S',300,2},
					  {121,"product10",'S',400,2},};
	cout<<"Products in large packaging worth net price between 200 and 1000:\n";
	for(int i=0;i<10;i++)
	{
		if(prod[i].packaging=='L')
		{
		    float netPrice=prod[i].price * (1 - prod[i].discount /100);	
		
		if(netPrice>=200 && netPrice<=1000)
		{
			cout<<"Code: "<<prod[i].code<<", Description: "<<prod[i].description<<", Net Price: "<<netPrice<<endl;
		}
	}
        }
        return 0;					  
}
