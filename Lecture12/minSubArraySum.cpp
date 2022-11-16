#include<bits/stdc++.h>
using namespace std;

int minSubArraySum(int*a , int n)
{
	int ans=INT_MAX;
	int csum=0;
	for(int i=0;i<n;i++)
	{
		csum+=a[i];
		ans=min(ans,csum);
		if(csum>0)csum=0;

	}
	return ans;
}

int main()
{
	int n;
	cin>>n;

	int* a=new int[n];
	for(int i=0;i<n;i++)cin>>a[i];

	cout<<minSubArraySum(a,n)<<endl;




}