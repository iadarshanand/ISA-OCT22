#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007

int NthLadderWays(int n,vector<int>&dp)
{
	//Base Case
	if(n<0)return 0;
	if(n==0)return 1;

	//Memoized Case
	if(dp[n]!=-1)return dp[n];

	//Recursive Case
	int op1=NthLadderWays(n-1,dp);
	int op2=NthLadderWays(n-2,dp);
	int op3=NthLadderWays(n-3,dp);

	return dp[n]= ((((op1%mod)+(op2%mod))%mod +(op3%mod))%mod)%mod;
}

int NthLadderWaysIterative(int n)
{
	vector<int>dp(n+1);
	//Initial steps
	dp[0]=1;


	for(int i=1;i<=n;i++)
	{
		int ans=0;
		if(i-1>=0)ans=(ans%mod + dp[i-1]%mod)%mod;
		if(i-2>=0)ans=(ans%mod + dp[i-2]%mod)%mod;
		if(i-3>=0)ans=(ans%mod + dp[i-3]%mod)%mod;
		dp[i]=ans%mod;
	}
	return dp[n];

}

int main()
{
	int n;
	cin>>n;

	vector<int>dp(n+1,-1);
	cout<<NthLadderWays(n,dp)<<endl;
	cout<<NthLadderWaysIterative(n)<<endl;
	return 0;
}