/*
    *
   * *
  * * *
 * * * *
* * * * *
 * * * *
  * * *
   * *
    *
*/
#include<iostream>
using namespace std;
int main()
{
	int n=5;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			cout<<" ";
			
		}
		for(int k=0;k<=i;k++)
		{
			cout<<"*";
			cout<<" ";
		}
		cout<<"\n";
	}
	
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<=i;j++)
		{
			cout<<" ";
			
		}
		for(int k=n-i-1;k>0;k--)
		{
			cout<<"*";
			cout<<" ";
			
		}
		cout<<"\n";
	}
}
