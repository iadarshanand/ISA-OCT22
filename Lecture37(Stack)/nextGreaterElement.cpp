#include<bits/stdc++.h>
using namespace std;

vector<int>nextGreaterFun(vector<int>&a)
{
	int n=a.size();
	vector<int>ans(n);

	stack<int>st;
	for(int i=n-1;i>=0;i--)
	{
		while(!st.empty() && st.top()<=a[i])st.pop();
		if(st.empty())ans[i]=-1;
		else ans[i]=st.top();

		//push curr element i.e. a[i] to stack in hope of next greater element for some one
		st.push(a[i]);
	}
	return ans;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<int>a(n);
		for(int i=0;i<n;i++)cin>>a[i];

		vector<int>nextGreater=nextGreaterFun(a);

		for(int i=0;i<n;i++)
		{
			cout<<a[i]<<","<<nextGreater[i]<<endl;
		}
	}
	return 0;
}