#include<bits/stdc++.h>
using namespace std;

void generateParenthesisHelper(int open, int close, int n, string &s)
{
	//base Case
	if(open==n && close==n)
	{
		cout<<s<<endl;
		return;
	}

	//recursive Case
	//Case 1: open parenthesis
	if(open<n)
	{
		s+='(';
		generateParenthesisHelper(open+1,close,n,s);

		//Backtracking
		s.pop_back();
	}

	//case 2: close Parenthesis
	if(close<open)
	{
		s+=')';
		generateParenthesisHelper(open,close+1,n,s);

		//Backtracking
		s.pop_back();
	}
}

void generateParenthesis(int n)
{
	string s="";
	int open=0,close=0;

	generateParenthesisHelper(open,close,n,s);
}

int main()
{
	int n;
	cin>>n;

	generateParenthesis(n);
}