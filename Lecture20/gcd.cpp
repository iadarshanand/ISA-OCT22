#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
	//Base Case
	if(b==0)return a;

	// Recursive Case
	return gcd(b,a%b);
}

//Iterative Approach
int gcdIterative(int a, int b)
{
	while(b!=0)
	{
		int temp=a%b;
		a=b;
		b=temp;
	}
	return a;
}


int main()
{
	int a,b;
	cin>>a>>b;
	cout<<gcd(a,b)<<endl;
	cout<<gcdIterative(a,b)<<endl;
	return 0;
}