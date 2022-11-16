#include<bits/stdc++.h>
using namespace std;

int main()
{
	// int val=7;
	// int *a=&val;
	// val++;
	// cout<<*a<<endl;

	// int val1=*a;
	// val1++;
	// cout<<val<<endl;
	// cout<<*a<<endl;

	//  (*a)++;
	// cout<<val<<endl;

	// int *b=a;
	// (*b)++;
	// cout<<val<<endl;

	// int a[5]={1,2,3,4};
	// cout<<a<<" "<<&a[0]<<" "<<&a<<endl;

	int a=10;
	cout<<&a<<endl;
	// int *p=0x7bfe14;//error, you need to typecast
	int *p=(int*)0x7bfe14;// chalegi
	int *p1=(int*)5;
	cout<<p1<<endl;

}