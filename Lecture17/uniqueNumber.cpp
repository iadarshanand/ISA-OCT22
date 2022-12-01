#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;

	int ans=0;
	for(int i=0;i<n;i++)
	{
		int no;
		cin>>no;
		ans^=no;
	}
	cout<<ans<<endl;
}