/*
    1
   21
  321
 4321
54321
*/
#include<iostream>
using namespace std;
int main()
{
	int n=5;
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			cout<<" ";
		}
		for(int k=i+1;k>0;k--)
		{
			cout<<k;
			
		}
		cout<<"\n";
	}
}
