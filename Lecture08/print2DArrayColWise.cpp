#include<bits/stdc++.h>
using namespace std;

int a[100][100];


void printArrayRowWise(int n, int m)
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

void printArrayColWise(int n, int m)
{
	for(int j=0;j<m;j++)
	{
		for(int i=0;i<n;i++)
		{
			cout<<a[i][j]<<" ";
		}
	}
	cout<<endl;
}


int main()
{
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

	// printArrayRowWise(n,m);

	printArrayColWise(n,m);


}