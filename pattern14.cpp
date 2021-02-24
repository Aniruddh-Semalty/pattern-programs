/*
    1
   123
  12345
 1234567
123456789
 1234567
  12345
   123
    1
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
		for(int k=1;k<=2*i+1;k++)
		{
			cout<<k;
		}
		cout<<"\n";
		
	}
	for(int i=1;i<n;i++)
	{
		for(int j=0;j<i;j++)
		{
			cout<<" ";
			
		}
		for(int k=1;k<(n*2)-(i*2);k++)
		{
			cout<<k;
			
		}
		cout<<"\n";
	}
}
