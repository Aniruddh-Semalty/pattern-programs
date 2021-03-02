#include<iostream>
using namespace std;
int main()
{
	int arr[]={7,9,4,1,6};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<"Unsorted array";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i];
	}
	cout<<endl;
	for (int i=0;i<n-1;i++)
	{
		for (int j=0;j<n-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int temp;
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	cout<<"sorted array";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i];
	}	
}
