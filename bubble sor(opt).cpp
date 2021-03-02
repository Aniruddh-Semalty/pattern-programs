#include<iostream>
using namespace std;
int main()
{

	int n,i,j,temp;
	cout<<"Enter the size of your array"<<endl;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++) //array input by user
	{
		cout<<"Enter the element of your array";
		cin>>arr[i];
	}
	cout<<endl;
	cout<<"Your array is"<<" ";
	for(i=0;i<n;i++) //displaying array which is inputted by user
	{
		cout<<arr[i]<<" ";
		
	}
	cout<<endl;
	
	// bubble sort starts
	
	for(i=0;i<n-1;i++)
	{
		int flag=0;
		for(j=0;j<n-1-i;j++) 
		{
			
			if(arr[j]>arr[j+1])
			{
				flag=1;
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
		if(flag==0)
		break;
	}
	// printing our sorted array
	cout<<"Sorted array is"<<" ";
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}	
}


