/*
   1
  123
 12345
1234567
*/


#include<iostream>
using namespace std;
int main()
{
	int n=5;
	for(int i=1;i<n;i++)
	{
		for(int j=4-i-1;j>=0;j--)
		{
			cout<<" ";
			
		}
		for(int k=0;k<(2*i-1);k++)
		{
			cout<<k+1;
		}
	cout<<"\n";
	}
	
}
