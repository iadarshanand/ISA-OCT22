#include<bits/stdc++.h>
using namespace std;

void combinSumHelper(int idx, int tar, int n, vector<int>&candidate, vector<int>&v, vector<vector<int>>&ans)
{
	//Base Case
	if(tar==0)
	{
		ans.push_back(v);
		return;
	}
	if(tar<0)return;
	if(idx>=n)return;

	//Recursive Case
	// Case 1: take c[idx]
	v.push_back(candidate[idx]);
	combinSumHelper(idx,tar-candidate[idx],n,candidate,v,ans);

	//Backtracking
	v.pop_back();

	//Case 2: No take c[idx]
	combinSumHelper(idx+1,tar,n,candidate,v,ans);

}

vector<vector<int>> combinSum(vector<int>&candidate, int target)
{
	int n=candidate.size();
	//Empty 2d vector
	vector<vector<int>>ans;
	//Empty vector
	vector<int>v;

	combinSumHelper(0,target,n,candidate,v,ans);

	return ans;
}


int main()
{
	int n,target;
	cin>>n>>target;
	vector<int>candidate(n);
	for(int i=0;i<n;i++)cin>>candidate[i];

	vector<vector<int>>ans=combinSum(candidate,target);
	
	for(auto x:ans)
	{
		for(auto y:x)cout<<y<<" ";
		cout<<endl;
	}
	return 0;

}