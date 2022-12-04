#include<bits/stdc++.h>
using namespace std;


void merge(vector<int>&a, int s, int mid, int e)
{
	int i=s,j=mid+1;
	vector<int>temp;

	while(i<=mid && j<=e)
	{
		if(a[i]<=a[j])
		{
			temp.push_back(a[i]);
			i++;
		}
		else
		{
			temp.push_back(a[j]);
			j++;
		}
	}

	//Cas1: i<=mid
	while(i<=mid)
	{
		temp.push_back(a[i]);
		i++;
	}

	//Case2: j<=e
	while(j<=e)
	{
		temp.push_back(a[j]);
		j++;
	}

	//copy from temp to a
	int idx=0,k=s;
	while(idx<temp.size())
	{
		a[k]=temp[idx];
		k++;
		idx++;
	}
}

void MergeSort(vector<int>&a, int s, int e)
{
	//Base case
	if(s>=e)return;

	//Recursive Case Start
	int mid=(s+e)/2;
	MergeSort(a,s,mid);
	MergeSort(a,mid+1,e);
	//Recursive Call end;

	//Merging
	merge(a,s,mid,e);

	//TC O(NLogN)
	//SC O(N)
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
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}

	MergeSort(a,0,n-1);
	printArray(a);
}