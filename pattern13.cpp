/*
54321
 4321
  321
   21
    1
*/
#include<iostream>
using namespace std;
int main()
{
	int n=5;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<i;j++)
		{
			cout<<" ";
			
		}
		for(int k=n-i;k>0;k--)
		{
			cout<<k;
		}
		cout<<"\n";
	}
}
