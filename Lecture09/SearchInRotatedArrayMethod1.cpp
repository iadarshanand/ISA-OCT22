#include<bits/stdc++.h>
using namespace std;


int findPivot(int a[], int n)
{
    int s=0,e=n-1;
    int ans=n-1;
    while(s<=e)
    {
        int mid=(s+e)/2;
        
        if(a[mid]>=a[0])s=mid+1;
        else
        {
            ans=mid;
            e=mid-1;
        }
    }
    return ans;
}
    
int binarySearch(int a[], int s, int e, int target)
{
    while(s<=e)
    {
        int mid=(s+e)/2;
        
        if(a[mid]==target)return mid;
        else if(a[mid]<target)s=mid+1;
        else e=mid-1;
    }
    return -1;
}

int SearchInRotatedArray1(int a[], int n, int target)
{
	// If no effective rotation i.e roatated array be {1,2,3,4,5,6}
	//We do simple binary search then
	if(a[0]<=a[n-1])return binarySearch(a,0,n-1,target);

	int pivotIdx=findPivot(a,n);

	if(target>=a[0])return binarySearch(a,0,pivotIdx-1,target);
	else return binarySearch(a,pivotIdx,n-1,target);

	//Now we have to return any integer bcz function has return type int
	// so return -1, while our ans came from either from if or else condition
	// but we need to return int here according to function
	//so we can return any integer

	return -1;
}

int main()
{
	int n,k;
	cin>>n>>k;

	int a[n];

	for(int i=0;i<n;i++)cin>>a[i];

	//Find index of target element.
	int idx=SearchInRotatedArray1(a,n,k);
	cout<<idx<<endl;
}