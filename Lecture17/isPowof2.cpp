#include<bits/stdc++.h>
using namespace std;

bool isPowOf2(int n)
{
	// if(!(n&(n-1)))return true;
	// return false;
	return !(n&(n-1));
}

int main()
{
	int n;
	cin>>n;

	bool chk=isPowOf2(n);
	if(chk)cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	return 0;
}