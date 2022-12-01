#include<bits/stdc++.h>
using namespace std;

int* fun()
{
	static int arr[3]={1,2,3};
	return arr;
}

int* fun1()
{
	int *arr=new int[3];
	arr[0]=1;
	return arr;
}


int main()
{
	int a=10;
	// int *arr=fun();
	// cout<<arr[1]<<" "<<arr[2]<<endl;

	int *b=fun1();

}