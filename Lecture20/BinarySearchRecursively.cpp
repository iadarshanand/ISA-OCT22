#include<bits/stdc++.h>
using namespace std;

bool binarySearch(vector<int>&a, int s, int e, int k)
{
	int mid=(s+e)/2;
	//Base Case
	if(s>e)return false;
	if(a[mid]==k)return true;

	//Recursive Case
	if(a[mid]>k)return binarySearch(a,s,mid-1,k);
	else return binarySearch(a,s+1,e,k);

}

int main()
{
	int n,k;
	cin>>n>>k;

	vector<int>a(n);
	for(int i=0;i<n;i++)cin>>a[i]; //Input will be in sorted order

	bool chk=binarySearch(a,0,n-1,k);
	if(chk)cout<<"present"<<endl;
	else cout<<"Not present"<<endl;
	return 0;
}