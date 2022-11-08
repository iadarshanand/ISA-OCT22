#include<bits/stdc++.h>
using namespace std;

bool searchLinearly(int a[], int n, int target)
{
	for(int i=0;i<n;i++)
	{
		if(a[i]==target)return true;
	}
	return false;
}

int main()
{
	int n,k;
	cin>>n>>k;

	int a[n];
	for(int i=0;i<n;i++)cin>>a[i];

	bool chk=searchLinearly(a,n,k);
	if(chk)cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	
}