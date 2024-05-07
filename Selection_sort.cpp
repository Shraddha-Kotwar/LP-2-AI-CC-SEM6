# include<iostream>
using namespace std;

void displayAsc(int arr[],int n);
void displayDes(int arr[],int n);

void SelectionSort(int arr[],int n)
{
	int min,temp;
	for(int i=0;i<n-1;i++)
	{
		min=i;
		for(int j=i+1;j<n;j++)
		{
			if(arr[j]<arr[min])
			{
				min=j;
			}
		}
		temp=arr[i];
		arr[i]=arr[min];
		arr[min]=temp;
	}
	
	displayAsc(arr,n);
	
	displayDes(arr,n);
}
void displayAsc(int arr[],int n)
{
	cout<<"\n\n---------Sorted in ascending----------\n";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<' ';
	}
}
void displayDes(int arr[],int n)
{
	cout<<"\n\n---------Sorted in descending----------\n";
	for(int i=n-1;i>=0;i--)
	{
		cout<<arr[i]<<' ';
	}
}
int main()
{
	int n;
	cout<<"\nEnter the number of elements: ";
	cin>>n;
	int arr[n];
	cout<<"\nEnter the elements in array: \n";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"\nGreedy Selection Sort: ";
	SelectionSort(arr,n);
	return 0;
}
