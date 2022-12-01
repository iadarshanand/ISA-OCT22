#include<bits/stdc++.h>
using namespace std;

int missingNum(vector<int>&a, int n)
{
	int size=a.size(); //size=n-1
	//Xor of 1 to N
	int ans=0;
	for(int i=1;i<=n;i++)
	{
		ans^=i;
	}
	//xor of array
	for(int i=0;i<size;i++)
	{
		ans^=a[i];
	}
	return ans;
}

int main()
{
	int n;
	cin>>n;
	vector<int>a(n-1);
	for(int i=0;i<n-1;i++)
	{
		cin>>a[i];
	}

	cout<<missingNum(a,n)<<endl;
}