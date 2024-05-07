#include<iostream>
#include<string>
using namespace std;
void AI(string nm11);
void buying(String nm);
void AI(string nm11)
	{
	
		cout<<"\nThat's a great choice "<<nm11;
		cout<<"\nBook Found";
		cout<<"\nBook Title: Artificial Intelligence: A Modern Approach ";
		cout<<"\nBook Author: Straut Russel ";
		cout<<"\nBook Price: 500";
		buying(nm11);
	};
	void WT(string nm22)
	{
		cout<<"\nThat's a great choice "<<nm22;
		cout<<"\nBook Found";
		cout<<"\nBook Title: Learning Web Technologies ";
		cout<<"\nBook Author: Stevin Kobar ";
		cout<<"\nBook Price: 590";
		buying(nm22);
	}
	void CC(string nm33)
	{
		cout<<"\nThat's a great choice "<<nm33;
		cout<<"\nBook Found";
		cout<<"\nBook Title: Cloud Computing for future "
		cout<<"\nBook Author: Kevin Morphl ";
		cout<<"\nBook Price: 900";
		buying(nm33);
	}
	
void buying(String nm)
{
	char y;
	string email,addr,ok,no;
	int phone;
	cout<<"\nDo you want to buy this book(y/n): ";
	cin>>resy;
	if(resy==y)
	{
		cout<<"\n Ok.."<<nm<<"\nFollow the steps to buy";
		cout<<"\n Enter your E-mail address";
		cin>>email;
		cout<<"\nEnter your phone number: ";
		cin>>phone;
		cout<<"\nEnter your home Address: \n";
		cin>>addr;
		cout<<"\n A payment link is sent to your E-mail Address kindly complete the payment \n";
		cin>>ok;
		
		cout<<"\n Ok Payment done successfully: \n";
		cout<<name<<" your order placed successfully";
		cout<<"\n Thank you for choosing our store... See you again "<<nm;
		cout<<"\n HAVE A NICE DAY DEAR";
	}else{
		cout<<"\n Will you buy it later on: "
		cin>>no;
		cout<<"\nBook added to your cart";
		cout<<"\n See you again "<<nm;
	}
}
void Education(string nm)
{
	int chE;
	cout<<"\nHere is the categories of the Educational books available to sale: "
	do{
		cout<<"\n---Educational Book Menu----";
		cout<<"\n1. Artificial Intelligence ";
		cout<<"\n2. Web Technology ";
		cout<<"\n3. Cloud Computing ";
		cout<<"\n4. Exit Menu ";
		cout<<"\nEnter your choice: ";
		cin>>chE;
		switch(chE)
		{
			case 1:
				AI(nm);
				break;
			case 2:
				WT(nm);
				break;
			case 3:
				CC(nm);
				break;
			case 4:
				break;
			default:
				cout<<"\nInvalid choice ";
		}
	}while(ch!=4);
}
void Comics(string nm)
{
	int chE;
	void AI(String nm1)
	{
		cout<<"\nThat's a great choice "<<nm1;
		cout<<"\nBook Found";
		cout<<"\nBook Title: Artificial Intelligence: A Modern Approach "
		cout<<"\nBook Author: Straut Russel ";
		cout<<"\nBook Price: 500";
		buying(nm1);
	}
	void WT(String nm2)
	{
		cout<<"\nThat's a great choice "<<nm2;
		cout<<"\nBook Found";
		cout<<"\nBook Title: Learning Web Technologies "
		cout<<"\nBook Author: Stevin Kobar ";
		cout<<"\nBook Price: 590";
		buying(nm2);
	}
	void CC(String nm3)
	{
		cout<<"\nThat's a great choice "<<nm3;
		cout<<"\nBook Found";
		cout<<"\nBook Title: Cloud Computing for future "
		cout<<"\nBook Author: Kevin Morphl ";
		cout<<"\nBook Price: 900";
		buying(nm3);
	}
	
	void buying(String nm)
	{
		char y;
		string email,addr,ok,no;
		int phone;
		cout<<"\nDo you want to buy this book(y/n): ";
		cin>>resy;
		if(resy==y)
		{
			cout<<"\n Ok.."<<nm<<"\nFollow the steps to buy";
			cout<<"\n Enter your E-mail address";
			cin>>email;
			cout<<"\nEnter your phone number: ";
			cin>>phone;
			cout<<"\nEnter your home Address: \n";
			cin>>addr;
			cout<<"\n A payment link is sent to your E-mail Address kindly complete the payment \n";
			cin>>ok;
			
			cout<<"\n Ok Payment done successfully: \n";
			cout<<name<<" your order placed successfully";
			cout<<"\n Thank you for choosing our store... See you again "<<nm;
			cout<<"\n HAVE A NICE DAY DEAR";
		}else{
			cout<<"\n Will you buy it later on: "
			cin>>no;
			cout<<"\nBook added to your cart";
			cout<<"\n See you again "<<nm;
		}
	}
	cout<<"\nHere is the categories of the Educational books available to sale: "
	do{
		cout<<"\n---Educational Book Menu----";
		cout<<"\n1. Artificial Intelligence ";
		cout<<"\n2. Web Technology ";
		cout<<"\n3. Cloud Computing ";
		cout<<"\n4. Exit Menu ";
		cout<<"\nEnter your choice: ";
		cin>>chE;
		switch(chE)
		{
			case 1:
				cout<<"\nThat's a great choice "<<nm;
				cout<<"\nBook Found";
				cout<<"\nBook Title: Artificial Intelligence: A Modern Approach "
				cout<<"\nBook Author: Straut Russel ";
				cout<<"\nBook Price: 500";
				buying(nm);
		}
	}
}
int main()
{
	string name,res1,res2;
	int ch;
	
	cout<<"\nHello ";
	cin>>res1;
	cout<<"\n Can I know your Goodname please:   ";
	cin>>name;
	cout<<"\n Hello "<<name<<" How may I help you..? ";
	cout<<" \nAre you searching for the books ";
	cin>>res2;
	cout<<"\nOh..that great!";
	cout<<"\nWlecome to our Online book Store\n";
	cout<<"\nHere is the categories of the book we have: \n";
	do{
		cout<<"\n----Book  Store  Menu--------";
		cout<<"\n1.  Educational books";
		cout<<"\n2. Comic books";
		cout<<"\n3. Exit menu: ";
		cout<<"\nEnter your choice: ".
		cin>>ch;
		switch(ch)
		{
			case 1:
				cout<<"\nOh..that's a really great choice "<<name;
				Education(name);
				break;
			case 1:
				cout<<"\nOh..that's a really great choice "<<name;
				Comics(name);
				break;
			case 3:
				break;
			default:
				break;
			
		}
	}while(ch!=3);
	return 0;
}
