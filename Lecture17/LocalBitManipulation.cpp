#include<bits/stdc++.h>
using namespace std;

void findIthBit(int n, int i)
{
	// if((n>>(i-1))&1)cout<<"Ith bit is setBit i.e 1"<<endl; //i.e 1
	// else cout<<"Ith bit is clearBit i.e 0"<<endl; // i.e 0

	if((1<<(i-1))&n)cout<<"Ith bit is setBit i.e 1"<<endl; //i.e 1
	else cout<<"Ith bit is clearBit i.e 0"<<endl; // i.e 0
}

void setIthBit(int n, int i)
{
	n=((1<<(i-1))|n);
	cout<<n<<endl;
}

void clearIthBit(int n, int i)
{
	n=(~(1<<(i-1)))&n;
	cout<<n<<endl;
}

int main()
{
	int n;
	cin>>n;
	int i;
	cin>>i;

	findIthBit(n,i);

	setIthBit(n,i);
	cout<<n<<endl;
	clearIthBit(n,i);

	

}