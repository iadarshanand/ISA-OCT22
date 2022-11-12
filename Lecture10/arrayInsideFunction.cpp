#include<bits/stdc++.h>
using namespace std;

void fun1(int a[])
{
	cout<<"size of a inside function is ";
	int size=sizeof(a);
	cout<<size<<endl;
	cout<<&a<<endl;

}

void fun2(int arr[])
{
	int size=sizeof(arr);
	cout<<size<<endl;
}

void fun3(int *a, int n)
{
	for(int i=0;i<n;i++)cout<<*(a+i)<<" ";
	cout<<endl;	
	int size=sizeof(a);
	cout<<size<<endl;

}

int main()
{
	int a[10]={1,2,3,4,5};
	int size=sizeof(a)/sizeof(a[0]);
	cout<<&a[0]<<endl;

	cout<<size<<endl;
	fun1(a);
	fun2(a);
	fun3(a,size);


}