#include<bits/stdc++.h>
using namespace std;

int countSetbit(int n)
{
	int cnt=0;
	while(n>0)
	{
		cnt+=(n&1);
		n>>=1; //n=n>>1
	}
	return cnt;
	//O(log2N)=O(1) b/c log2N at max 32
}

int MostEffcntSetbit(int n)
{
	int cnt=0;
	while(n>0)
	{
		cnt++;
		n=(n&(n-1));
	}
	return cnt;
	// O(no. of setbit)=O(1)
}

int main()
{
	int n;
	cin>>n;
	int cnt=countSetbit(n);
	cout<<cnt<<endl;
	int cnt1=MostEffcntSetbit(n);
	cout<<cnt1<<endl;
}