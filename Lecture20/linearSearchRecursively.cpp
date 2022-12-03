#include<bits/stdc++.h>
using namespace std;

bool linearSearchRightToLeft(vector<int>&a, int i, int k)
{
	//Base Case
	if(i==-1)return false;
	if(a[i]==k)return true;

	//Recursive Case
	return linearSearchRightToLeft(a,i-1,k);
}

bool linearSearchLeftToRight(vector<int>&a, int i, int k, int n)
{
	//Base Case
	if(i==n)return false;
	if(a[i]==k)return true;

	//Recursive Case
	return linearSearchLeftToRight(a,i+1,k,n);

}

int main()
{
	int n,k;
	cin>>n>>k;

	vector<int>a(n);
	for(int i=0;i<n;i++)cin>>a[i];

	bool chk=linearSearchRightToLeft(a,n-1,k);
	if(chk)cout<<"present"<<endl;
	else cout<<"Not Present"<<endl;

	bool chk1=linearSearchLeftToRight(a,0,k,n);
	if(chk1)cout<<"present"<<endl;
	else cout<<"Not Present"<<endl;	
}