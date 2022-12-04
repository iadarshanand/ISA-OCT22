#include<bits/stdc++.h>
using namespace std;

void bubbleSortIterative(vector<int>&a)
{
	int n=a.size();

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])swap(a[j],a[j+1]);
		}
	}
}

void bubbleSortRecursiveRightToLeft(vector<int>&a, int n)
{
	//Base Case
	if(n==0)return;

	//someoperation
	for(int i=0;i<=n-1;i++)
	{
		if(a[i]>a[i+1])swap(a[i],a[i+1]);
	}

	//Recursive Case
	bubbleSortRecursiveRightToLeft(a,n-1);
}

void print(vector<int>&a)
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

	// bubbleSortIterative(a);
	bubbleSortRecursiveRightToLeft(a,n-1);
	print(a);
}
