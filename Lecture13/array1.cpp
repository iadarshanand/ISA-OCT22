#include<bits/stdc++.h>
using namespace std;

void fun()
{
	//create array with dynamic allocation

	//delete that array created in heap memory
}



int main()
{
	int n;
	cin>>n;
	int *a=new int[n];
	for(int i=0;i<n;i++)cin>>a[i];

	///Work
	//////////


	delete[]a; //deallocation
}