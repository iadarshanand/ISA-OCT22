#include<bits/stdc++.h>
using namespace std;

int strToInt(int i, string &s)
{
	//Base Case
	if(i<0)return 0;

	//Recursive Case
	int num=strToInt(i-1,s);
	return num*10 + (s[i]-'0');
}

int main()
{
	string s="123466";
	int n=s.size();
	// cout<<s-10<<endl;//error
	// int num=s; //error
	// cout<<num<<endl;
	// int val=stoi(s);
	// cout<<val<<endl;

	cout<<strToInt(n-1,s)<<endl;
	return 0;
}