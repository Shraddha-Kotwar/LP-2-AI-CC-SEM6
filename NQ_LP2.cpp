# include<iostream>
#include<stdlib.h>
using namespace std;

int NQueen(int r,int n);
int Place(int r,int c);
int Print(int n);
int x[20],count;

int NQueen(int r,int n)
{
	for(int c=1;c<=n;c++)
	{
		if(Place(r,c)){
			x[r]=c;
			if(r==n)
			{
				Print(n);
			}
			else{
				NQueen(r+1,n);
			}
		}
	}
	return 0;
}
int Place(int r,int c)
{
	for(int j=1;j<=r;j++)
	{
		if(x[j]==c)
		{
			return 0;
		}
		else{
			if(abs(x[j]-c)==abs(j-r))
			{
				return 0;
			}
		}
	}
	return 1;
}
int Print(int n)
{
	cout<<"\n\nSolution "<<++count<<"\n\n";
	for(int i=1;i<=n;i++)
	{
		cout<<"\t"<<i;
	}
	for(int i=1;i<=n;i++)
	{
		cout<<"\n"<<i;
		for(int j=1;j<=n;j++)
		{
			if(x[i]==j)
			{
				cout<<"\tQ";
			}else{
				cout<<"\t-";
			}
		}
	}
	return 0;
}
int main()
{
	int n;
	cout<<"Enter the number of queens: ";
	cin>>n;
	cout<<"\n N- Queen Solution: ";
	NQueen(1,n);
	return 0;
}

