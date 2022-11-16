#include<iostream>
using namespace std;

void printSubarray(int *a, int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			for(int k=i;k<=j;k++)
			{
				cout<<a[k]<<" ";
			}
			cout<<endl;
		}
	}
}

int main()
{
	int n;
	cin>>n;

	int *a=new int[n];
	for(int i=0;i<n;i++)cin>>a[i];

	printSubarray(a,n);


}