#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007

int NthLadderWithK(int n, int k, vector<int>&dp)
{
	//Base Case
	if(n<0)return 0;
	if(n==0)return 1;

	//Memoized Case
	if(dp[n]!=-1)return dp[n];

	//Recursive Case
	int ans=0;
	for(int i=1;i<=k;i++)
	{
		ans=(ans%mod + NthLadderWithK(n-i,k,dp)%mod)%mod;
	}
	return dp[n]=ans%mod;
}

int NthLadderWithKiterative(int n, int k)
{
	vector<int>dp(n+1);
	dp[0]=1;
	for(int i=1;i<=n;i++)
	{
		int ans=0;
		for(int j=1;j<=k;j++)
		{
			if(i-j>=0)
			{
				ans=(ans%mod + dp[i-j])%mod;
			}
		}
		dp[i]=ans%mod;
	}
	return dp[n];
}

int main()
{
	int n,k;
	cin>>n>>k;

	vector<int>dp(n+1,-1);
	cout<<NthLadderWithK(n,k,dp)<<endl;
	cout<<NthLadderWithKiterative(n,k)<<endl;
	return 0;
}