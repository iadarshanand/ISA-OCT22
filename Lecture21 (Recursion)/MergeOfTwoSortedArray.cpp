#include<bits/stdc++.h>
using namespace std;

vector<int> Merge(vector<int>&a, int n, vector<int>&b, int m)
{
	int i=0,j=0;
	vector<int>temp;
	while(i<n && j<m)
	{
		if(a[i]<=b[j])
		{
			temp.push_back(a[i]);
			i++;
		}
		else
		{
			temp.push_back(b[j]);
			j++;
		}
	}

	// Case1: i did not overpassed n
	while(i<n)
	{
		temp.push_back(a[i]);
		i++;
	}

	//Case2: j did not overpassed m
	while(j<m)
	{
		temp.push_back(b[j]);
		j++;
	}

	return temp;

}

void printArray(vector<int>&a)
{
	int n=a.size();
	for(int i=0;i<n;i++)cout<<a[i]<<" ";
	cout<<endl;
}
int main()
{
	int n;
	cin>>n;
	vector<int>a(n);
	for(int i=0;i<n;i++)cin>>a[i];

	int m;
	cin>>m;
	vector<int>b(m);
	for(int i=0;i<m;i++)cin>>b[i];

	vector<int>ans=Merge(a,n,b,m);
	printArray(ans);
	return 0;
}