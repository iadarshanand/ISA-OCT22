#include<bits/stdc++.h>
using namespace std;

//Method 1
int MaxSubSum1(int *a, int n)
{
	int ans=INT_MIN;
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			int sum=0;
			for(int k=i;k<=j;k++)
			{
				sum+=a[k];
			}
			ans=max(ans,sum);
		}
	}
	return ans;
}

//Method 2
int MaxSubSum2(int *a, int n)
{
	int ans=INT_MIN;
	for(int i=0;i<n;i++)
	{
		int sum=0;
		for(int j=i;j<n;j++)
		{
			sum+=a[j];
			ans=max(ans,sum);
		}
	}
	return ans;
}

int kadaneAlgo(int *a, int n)
{
	int ans=INT_MIN;
	int csum=0;
	for(int i=0;i<n;i++)
	{		
		csum+=a[i];
		ans=max(ans,csum);
		if(csum<0)csum=0;
	}
	return ans;
}

int main()
{
	int n;
	cin>>n;

	int *a=new int[n];

	for(int i=0;i<n;i++)cin>>a[i];

	cout<<MaxSubSum1(a,n)<<endl;

	cout<<MaxSubSum2(a,n)<<endl;

	cout<<kadaneAlgo(a,n)<<endl;
}