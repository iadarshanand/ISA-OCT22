#include<bits/stdc++.h>
using namespace std;

int a[100][100];

void printDiagonal(int n)
{
	//step 1.
	for(int k=0;k<n;k++)
	{
		int row=0, col=k;
		while(col>=0)
		{
			cout<<a[row][col]<<" ";
			row++;
			col--;
		}
	}

	//step 2
	for(int k=1;k<n;k++)
	{
		int row=k,col=n-1;
		while(row<n)
		{
			cout<<a[row][col]<<" ";
			row++;
			col--;
		}
	}
}

int main()
{

	int n;
	cin>>n;

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}

	printDiagonal(n);

}