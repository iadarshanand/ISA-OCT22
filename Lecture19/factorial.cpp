#include<bits/stdc++.h>
using namespace std;

void multiply(vector<int>&a, int num)
{
	int carry=0;
	for(int i=0;i<a.size();i++)
	{
		int prod=num*a[i] + carry;
		a[i]=prod%10;
		carry=prod/10;
	}
	while(carry>0)
	{
		a.push_back(carry%10);
		carry/=10;
	}
}

void print(vector<int>&a)
{
	int n=a.size();
	for(int i=n-1;i>=0;i--)cout<<a[i];
		cout<<endl;
}

void factorial (int n)
{
	vector<int>a;
	a.push_back(1);
	for(int i=2;i<=n;i++)
	{
		multiply(a,i);
	}
	print(a);
}



int main()
{
	int n;
	cin>>n;

	// ll ans=1;
	// for(int i=1;i<=n;i++)
	// {
	// 	ans=(ans%mod * i%mod)%mod;
	// }
	// cout<<ans<<endl;

	factorial(n);
	


}