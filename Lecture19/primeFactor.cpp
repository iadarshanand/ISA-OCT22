#include<bits/stdc++.h>
using namespace std;

void printPrimeFactors(int n)
{
	for(int i=2;i*i<=n;i++)
	{
		if((n%i)==0)
		{
			while(n%i==0)
			{
				cout<<i<<" ";
				n/=i;
			}
		}
	}
	if(n>1)cout<<n;
	cout<<endl;
}

bool checkPrimeNo(int n)
{
	if(n<2)return false; //0 1 is not prime number
	for(int i=2;i*i<=n;i++)
	{
		if(n%i==0)return false;
	}
	return true;
}

int main()
{
	int n;
	cin>>n;

	printPrimeFactors(n);
	bool chk=checkPrimeNo(n);
	if(chk)cout<<"prime Number"<<endl;
	else cout<<"Not Prime"<<endl;
}