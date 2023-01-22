#include<bits/stdc++.h>
using namespace std;

void print(stack<int>st)
{
	while(!st.empty())
	{
		cout<<st.top()<<" ";
		st.pop();
	}
	cout<<endl;
}

void reverseM1(stack<int>&st)
{
	stack<int>st1;
	while(!st.empty())
	{
		st1.push(st.top());
		st.pop();
	}
	st=st1;
}

void AddTempToLastOfStack(stack<int>&st, int temp)
{
	//Base Case
	if(st.empty())
	{
		st.push(temp);
		return;
	}

	//Recursive Case
	int x=st.top();
	st.pop();

	AddTempToLastOfStack(st,temp);

	//operation
	st.push(x);

}

void reverseRecursively(stack<int>&st)
{
	//Base Case
	if(st.empty())return;

	//Recursive Case
	int temp=st.top();
	st.pop();

	reverseRecursively(st);

	//opertaions
	AddTempToLastOfStack(st,temp);
}

int main()
{
	int n;
	cin>>n;
	stack<int>st;
	for(int i=0;i<n;i++)
	{
		int ip;
		cin>>ip;

		st.push(ip);
	}

	print(st);
	reverseM1(st);
	print(st);
	reverseRecursively(st);
	print(st);
}