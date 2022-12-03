#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll fastExpo(ll a, ll b, ll m)
{
	ll ans=1;
	while(b>0)
	{
		int last_bit=(b&1);
		if(last_bit==1)ans=(ans%m * a%m)%m;

		b>>=1;
		a=(a%m * a%m)%m;
	}
	return ans;
}

int main()
{
	ll a,b,m;
	cin>>a>>b>>m;
	cout<<fastExpo(a,b,m)<<endl;//pow(a,b)%m
}