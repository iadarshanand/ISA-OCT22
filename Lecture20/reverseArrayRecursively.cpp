#include<bits/stdc++.h>
using namespace std;

void reverseArray(vector<int>&a, int s, int e)
{
	//Base Case
	if(s>e)return;

	swap(a[s],a[e]);

	//Recursive Case
	return reverseArray(a,s+1,e-1);
}

void printArray(vector<int>&a)
{
	for(auto x:a)cout<<x<<" ";
	cout<<endl;
}

int main()
{
	int n;
	cin>>n;
	vector<int>a(n);
	for(int i=0;i<n;i++)cin>>a[i];

	reverseArray(a,0,n-1);
	printArray(a);
}