#include<iostream>
using namespace std;
#include<vector>

class stack
{
private:
	vector<int>v;
public:
	//construvtor
	stack()
	{

	}

	//fn
	void push(int data)
	{
		v.push_back(data);
	}

	void pop()
	{
		if(v.size()==0)
		{
			cout<<"stack is empty so can't be popped"<<endl;
			return;
		}
		v.pop_back();
	}

	int size()
	{
		return v.size();
	}

	bool empty()
	{
		if(v.size()>0)return false;
		else return true;

		//return !v.size();
	}

	int top()
	{
		if(v.size()==0)
		{
			cout<<"stack is already empty"<<endl;
			return -1;
		}
		return v[v.size()-1];
	}

};

void print(stack st)
{
	while(!st.empty())
	{
		cout<<st.top()<<" ";
		st.pop();
	}
	cout<<endl;
}

int main()
{
	stack st;
	int n;
	cin>>n;

	for(int i=0;i<n;i++)
	{
		int ip;
		cin>>ip;

		st.push(ip);
	}

	// cout<<st.top()<<endl;
	
	// print(st);
	// cout<<st.top()<<endl;

	while(!st.empty())
	{
		cout<<st.top()<<endl;
		st.pop();
	}
	st.pop();

}