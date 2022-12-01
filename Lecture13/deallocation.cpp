#include<bits/stdc++.h>
using namespace std;


void fun()
{
	int a=15;
	int arr[3]={1,2,3};
}

void fun1()
{
	int a=12;
	int *arr=new int[3];
	arr[0]=1;

	delete[]arr;

}

int main()
{
	int a=10;
	fun();
	fun1();

}