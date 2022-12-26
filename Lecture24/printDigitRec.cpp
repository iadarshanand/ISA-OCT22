#include<bits/stdc++.h>
using namespace std;
string a[]={"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};


void PrintDig(int i, string &s, int n)
{
	//Base Case
	if(i==n)return;

	//Some operation--> Print curr dig
	char c=s[i];
	int num=c-'0';
	cout<<a[num]<<" ";

	//Recursion
	PrintDig(i+1,s,n);
}

void printDegBack(int i, string &s)
{
	//Base Case
	if(i<0)return;

	//Rec Case
	printDegBack(i-1,s);
	//Print curr dig
	cout<<a[s[i]-'0']<<" ";
}


int main()
{
	string s="1234";
	int n=s.size();

	PrintDig(0,s,n);
	cout<<endl;
	printDegBack(n-1,s);



}