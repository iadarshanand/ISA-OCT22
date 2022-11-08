#include<bits/stdc++.h>
using namespace std;

bool BinarySearch(int a[], int n, int target)
{
	int s=0,e=n-1;
	while(s<=e)
	{
		int mid=(s+e)/2;

		if(a[mid]==target)return true;
		else if(a[mid]<target)s=mid+1;
		else e=mid-1;
	}
	return false;

}

int main()
{
	int n,k;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++)cin>>a[i]; //input integer shoulb be in sorted order(either non decreasing or non increasing)

	bool chk=BinarySearch(a,n,k);
	
	if(chk)cout<<"YES"<<endl;
	else cout<<"NO"<<endl;

}