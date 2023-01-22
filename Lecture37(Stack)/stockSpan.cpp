#include<bits/stdc++.h>
using namespace std;

vector<int> prevGreater(vector<int>&a)
{
	int n=a.size();

	stack<pair<int,int>>st; //stack<idx,element>
	// st.push(make_pair(-1,INT_MAX));
	st.push({-1,INT_MAX});

	vector<int>prevIdx(n);
	for(int i=0;i<n;i++)
	{
		while(a[i]>=st.top().second)st.pop();

		prevIdx[i]=st.top().first;

		st.push({i,a[i]});
	}
	return prevIdx;
}

int main()
{
	int n;
	cin>>n;

	vector<int>a(n);
	for(int i=0;i<n;i++)cin>>a[i];

	vector<int>prevGreaterIdx=prevGreater(a);
	// for(auto x:prevGreaterIdx)cout<<x<<" ";
	// cout<<endl;

	vector<int>span(n);
	for(int i=0;i<n;i++)span[i]=i-prevGreaterIdx[i];

	for(auto x:span)cout<<x<<" ";
	cout<<"END"<<endl;

	return 0;


}