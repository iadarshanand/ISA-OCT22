#include<bits/stdc++.h>
using namespace std;

int fib(int n, vector<int>&dp)
{
	//Base Case
	if(n==0 || n==1)return 1;

	//Memoized Case
	if(dp[n]!=-1)return dp[n];

	//Recursive Case
	return dp[n]= fib(n-1,dp)+fib(n-2,dp); //TC=O(N), SC=O(N)
}

int main()
{
	int n;
	cin>>n;

	vector<int>dp(n+1,-1);

	cout<<fib(n,dp)<<endl;
	
	return 0;
}
