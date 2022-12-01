#include<bits/stdc++.h>
using namespace std;

int main()
{

	// for(int i=0;i<100;i++)
	// {
	// 	cout<<i<<" ";
	// }
	// cout<<endl;
	// int a=10;
	// int n;
	// cin>>n;

	// for(int i=0;i<n;i++)
	// {
	// 	cout<<i<<" ";
	// }
	// cout<<endl

	int n;
	cin>>n;

	// for(int i=0;i<n;i++)
	// {
	// 	for(int j=0;j<m;j++)
	// 	{
	// 		cout<<i+j<<" ";
	// 	}
	// 	cout<<endl;
	// }


	// O(N)
	// for(int i=0;i<n;i++)
	// {
	// 	int j;
	// 	for(j=i;j<n;j++)
	// 	{
	// 		cout<<j<<" ";
	// 	}
	// 	i=j;
	// 	cout<<endl;
	// }

	// for(int i=0;i<n;i++)
	// {
	// 	for(int j=0;j<5;j++)
	// 	{
	// 		cout<<j<<" ";
	// 	}
	// 	cout<<endl;
	// }


}



// linear search
// bool search(int *a, int n, int tar)
// {
// 	// a={1,2,3,4,5,6,7,8,......,100};
// 	// n=100;
// 	// target=1;

// 	for(int i=0;i<n;i++)
// 	{
// 		if(a[i]==tar)return true;
// 	}
// 	return false;
// }


//Binary Search

// O(log N)
// bool searcBinary(int *a, int n, int tar)
// {
// 	int i=0,j=n-1;
// 	while(i<=j)
// 	{
// 		int mid=(i+j)/2;
// 		if(a[mid]==tar)return true;
// 		else if(a[mid]<tar)i=mid+1;
// 		else j=mid-1;
// 	}
// 	return false;
// }

// for(int i=n;i>=1;i/=2)
// {
// 	///// instruction of o(1);
// }