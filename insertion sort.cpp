#include<iostream>
using namespace std;
int main()
{
	int arr[]={3,12,4,5,2,1,56};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<"unsorted array"<<" ";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
		
	}
	cout<<endl;
	//insertion sort
	for(int i=1;i<n;i++)
	{
		int temp;
		temp=arr[i];
		int j=i-1;
		while(j>=0 &&arr[j]>temp)
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=temp;
	}
	cout<<"sorted array is "<<" ";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}

