#include<bits/stdc++.h>
using namespace std;

int partition(vector<int>&a, int s, int e)
{
	int idx=s-1;
	for(int i=s;i<=e;i++)
	{
		if(a[i]<=a[e]) //a[e] is pivot element, on basis of which we do partition.
		{
			idx++;
			swap(a[idx],a[i]);
		}
	}
	return idx;

}

void quickSort(vector<int>&a, int s, int e)
{
	//Base Case
	if(s>=e)return;

	//operation to find partitioned idx
	int p=partition(a,s,e);

	//Recursive Case	
	quickSort(a,s,p-1);
	quickSort(a,p+1,e);

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

	quickSort(a,0,n-1);
	printArray(a);

}