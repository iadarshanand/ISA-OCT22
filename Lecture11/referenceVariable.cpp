#include<bits/stdc++.h>
using namespace std;

void updateByCallByVal(int a)
{
	a++;
}

void updateByCallByReference(int &n)
{
	n++;
}

int main()
{  
   // Reference variable
	// int a=10;
	// int &b=a;
	// int &c=b;
	// cout<<a<<" "<<b<<endl;
	// b++;
	// cout<<a<<endl;
	// cout<<c<<endl;

	int a=10;
	updateByCallByVal(a);
	cout<<a<<endl;

	updateByCallByReference(a);
	cout<<a<<endl;


}