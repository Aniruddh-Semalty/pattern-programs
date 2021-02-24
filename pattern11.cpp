/*
5 4 3 2 1
4 3 2 1
3 2 1
2 1
1
*/



#include<iostream>
using namespace std;
int main()
{
	int n=5;
	for(int i=0;i<n;i++)
	{
		for(int j=n-i;j>0;j--)
		{
			cout<<j;
			cout<<" ";
		}
		cout<<"\n";
	}
}
