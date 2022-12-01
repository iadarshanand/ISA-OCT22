#include<bits/stdc++.h>
using namespace std;

int *f()
{
	int *arr=new int[3];

	arr[0]=1;
	cout<<arr[0]<<endl;
	delete[] arr;
	cout<<arr[0]<<endl;

	return arr;

}

int main()
{
	// int *a=f();
	// a=NULL;


	int *ptr;

	if(1==1)
	{
		int num=10;
		ptr=&num;
	}
	

}