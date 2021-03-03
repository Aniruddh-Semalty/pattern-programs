#include<iostream>
using namespace std;
//swap function
	void swap(int *k , int *l)
	{
		int temp;
		temp=*k;
		*k=*l;
		*l=temp;
	}

int main()

{
	int arr[]={0,11,5,4,1,2,9};
	int i,j;
	
	int min;
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<"Your array"<<"";
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	//selection sort begins 
	for(i=0;i<n-1;i++)//n-1 because at last one element is sorted automatically
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(arr[min]>arr[j])
			{
				min=j;
			}
			
		}
		if(min!=i)
		{
				swap(&arr[min],&arr[i]);
		}
	}
	// Printing our sorted array
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
