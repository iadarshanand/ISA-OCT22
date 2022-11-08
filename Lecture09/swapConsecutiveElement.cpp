#include<bits/stdc++.h>
using namespace std;

void swapConsec1(int a[], int n)
{
	for(int i=0;i<n;i+=2)
	{
		if(i+1<n)swap(a[i],a[i+1]);
	}
}

void swapConsec2(int a[], int n)
{
	for(int i=1;i<n;i+=2)
	{
		swap(a[i],a[i-1]);
	}
}
void printAraay(int a[], int n)
{
	for(int i=0;i<n;i++)cout<<a[i]<<" ";
		cout<<endl;
}

int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}

	// swapConsec1(a,n);
	swapConsec2(a,n);
	printAraay(a,n);

}