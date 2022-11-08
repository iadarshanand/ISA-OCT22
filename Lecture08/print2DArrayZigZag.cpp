#include<bits/stdc++.h>
using namespace std;


void printZiagzag(int a[][100], int n)
{
	// step 1
	for(int k=0;k<n;k++)
	{
		if((k%2)==0)
		{
			int col=0,row=k;
			while(row>=0)
			{
				cout<<a[row][col]<<" ";
				row--;
				col++;
			}
		}
		else
		{
			int row=0,col=k;
			while(col>=0)
			{
				cout<<a[row][col]<<" ";
				row++;
				col--;
			}
		}
	}

	//step 2
	for(int k=1;k<n;k++)
	{
		if(((n%2)==0 && (k%2)==0) || ((n%2==1) && (k%2)==1))
		{
			int row=k,col=n-1;
			while(row<n)
			{
				cout<<a[row][col]<<" ";
				row++;
				col--;
			}			
		}
		else
		{
			int row=n-1,col=k;
			while(col<n)
			{
				cout<<a[row][col]<<" ";
				row--;
				col++;
			}
		}
	}
}


int main()
{
	int  n;
	cin>>n;
	int a[100][100];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}


	printZiagzag(a,n);


}