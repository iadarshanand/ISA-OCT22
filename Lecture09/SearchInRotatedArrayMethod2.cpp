#include<bits/stdc++.h>
using namespace std;

int SearchInRotatedArray2(int a[], int n, int target)
{
    int lb=0,ub=n-1;
    if(a[lb]==target)return lb;
    if(a[ub]==target)return ub;
    while(lb<ub)
    {
        int mid=(lb+ub)/2;
        if(a[mid]==target)return mid;
        if(target>=a[0])
        {
            if(a[mid]>target)
                ub=mid;
            else if(a[mid]<target && a[mid]<a[0])
                ub=mid;
            else
                lb=mid+1;
        }
        else
        {
            if(a[mid]<target)
                lb=mid+1;
            else if(a[mid]>target && a[mid]<a[0])
                ub=mid;
            else
                lb=mid+1;
        }
    }
    return -1;	
}

int main()
{
	int n,k;
	cin>>n>>k;

	int a[n];

	for(int i=0;i<n;i++)cin>>a[i];

	//Find index of target element.
	int idx=SearchInRotatedArray2(a,n,k);
	cout<<idx<<endl;
}