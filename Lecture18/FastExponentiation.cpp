#include<bits/stdc++.h>
using namespace std;

int fastExpo(int a, int b)
{
	int ans=1;
	while(b>0)
	{
		int last_bit=(b&1);
		if(last_bit==1)ans*=a;

		b>>=1;
		a*=a;
	}
	return ans;
}

int main()
{
	int a,b;
	cin>>a>>b;
	cout<<fastExpo(a,b)<<endl;//pow(a,b)
	cout<<(int)pow(a,b)<<endl;
}