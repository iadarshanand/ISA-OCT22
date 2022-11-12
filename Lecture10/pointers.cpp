#include<bits/stdc++.h>
using namespace std;

int main()
{
	// int val=5;
	// // cout<<val<<endl;
	// cout<<&val<<endl;

	//Bad Practice
	// int *p;
	// cout<<p<<endl;
	// cout<<&p<<endl;
	// cout<<*p<<endl;
	//Bad Practice

	//Good Practice
	// int *p=NULL;
	// cout<<&p<<endl;
	// // cout<<p<<endl;
	// // cout<<*p<<endl;

	// p=&val;
	// cout<<p<<endl;
	// cout<<*p<<endl;

	// int *ptr=&val;
	// cout<<ptr<<endl;
	// cout<<&ptr<<endl;
	// cout<<*ptr<<endl;


	// int val1=11;
	// cout<<val1<<endl;
	// cout<<&val1<<endl;
	// cout<<*val1<<endl;  error bcz val1 is int datatype value not pointer


	// int val=11;
	// int *p1=&val;
	// int *p2=&val;
	// int *q=p1;

	// cout<<p1<<" "<<p2<<" "<<q<<" "<<&val<<endl;

	//Pointers Airthmetic

	int var=5;
	var=var+1;
	cout<<var<<endl;

	int *p=&var;
	// cout<<p<<endl;
	// p++;
	// cout<<p<<endl;

	p=&var;
	cout<<p<<endl;
	cout<<*p<<endl;

	*p*=*p;
	cout<<*p<<endl;
	cout<<p<<endl;








}

