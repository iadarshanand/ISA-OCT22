#include<bits/stdc++.h>
using namespace std;

int lowerBound(int a[], int n, int target)
{
	int s=0,e=n-1;
	int ans=-1;

	while(s<=e)
	{
		int mid=(s+e)/2;

		if(a[mid]==target)
		{
			ans=mid;
			e=mid-1;
		}
		else if(a[mid]<target)s=mid+1;
		else e=mid-1;
	}
	return ans;
}

int main()
{
	int n,k;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++)cin>>a[i];


	int lb=lowerBound(a,n,k);
	cout<<lb<<endl;
}