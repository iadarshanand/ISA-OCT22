#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a=10,b=15;

	//Method 1 (STL)
	// swap(a,b);
	// cout<<a<<" "<<b<<endl;

	//Method 2
	// int temp=a;
	// a=b;
	// b=temp;
	// cout<<a<<" "<<b<<endl;

	//Method 3
	// a=a+b;
	// b=a-b;
	// a=a-b;
	// cout<<a<<" "<<b<<endl;

	//Method 4
	// a=a^b;
	// b=a^b; // b=(a^b)^b=a
	// a=a^b; // a=(a^b)^a=b
	// cout<<a<<" "<<b<<endl;

	// Alternate methods (one line)
	// b=(a+b)-(a=b);
	// a=a^b^(b=a);
	// cout<<a<<" "<<b<<endl;


}