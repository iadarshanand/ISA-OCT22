#include<bits/stdc++.h>
using namespace std;

int main()
{
	// Wild pointers Bad Practice
	// int *p;
	// cout<<p<<endl;
	// cout<<&p<<endl;
	// cout<<*p<<endl;

	//Null Pointers
	// int *p=NULL;
	// int * p1=0;

	// cout<<*p<<endl; //segmentation fault;

	//void pointers
	// char *c=NULL;
	// void* p;
	// int a=10;
	// // c=&a;
	// cout<<&a<<endl;
	// p=&a;
	// cout<<p<<endl;
	// // cout<<*p<<endl;//error b/c you cant dereference directly
	// cout<<*(int*)p<<endl; // we can access by typecast

	//double pointers
	// int a=10;
	// int *p=&a;
	// int **dp=&p;
	// cout<<dp<<endl; //add of p
	// cout<<*dp<<endl; //add of a or value of p
	// cout<<**dp<<endl; //val of a=10
	// cout<<&dp<<endl;
	// //triple pointer
	// int ***tp=&dp;
	// cout<<tp<<endl;
	// cout<<***tp<<endl;

	// int **dp1=&tp;//error bcz its mandatory to pointed by fourth pointer.



}