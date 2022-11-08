#include<bits/stdc++.h>
using namespace std;

void printArray(int a[][100], int n, int m)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<a[i][j]<<" ";
		}
	}
	cout<<endl;
}

int main()
{
	int a[100][100];
	int n,m;
	cin>>n>>m;

	// int a[n][m];  occur problems in passing through function

	//take input
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>a[i][j];
		}
	}

	printArray(a,n,m);


}