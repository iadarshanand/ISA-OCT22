#include<iostream>
using namespace std;

class queue
{
public:
	int a[10]; //array is of size 10
	int first, last;
	int n;
	int sz;

	// constructor
	queue()
	{
		first=0;
		last=0;
		n=10;
		sz=0;

	}

	//fn
	void push(int val)
	{
		if(isFull())
		{
			cout<<"queue is full"<<endl;
			return;
		}
		a[last]=val;
		last++;
		sz++;
	}

	void pop()
	{
		if(empty())
		{
			cout<<"queue is already empty"<<endl;
			return;
		}
		first++;
		sz--;
	}

	void display()
	{
		if(empty())
		{
			cout<<"queue is empty"<<endl;
			return;
		}
		for(int i=first;i<last;i++)cout<<a[i]<<" ";
		cout<<endl;
	}
	bool isFull()
	{
		return last==n;
		// return sz==n;
	}
	bool empty(){
		return first==last;
		// return sz==0;
	}
	int size()
	{
		return sz;
	}


};

int main()
{
	queue q;
	int n;
	cin>>n;

	for(int i=0;i<n;i++)
	{
		int ip;
		cin>>ip;
		q.push(ip);
		q.display();
	}
	q.display();
	q.push(6);
	q.display();
	q.push(7);
	q.display();
	q.push(8);
	q.display();
	q.push(9);
	q.display();
	q.push(10);
	q.display();
	q.push(11);
	q.display();

	// popped out
	q.pop();
	q.display();
	q.pop();
	q.display();;
	q.pop();
	q.display();
	q.pop();
	q.display();
	q.pop();
	q.display();

	q.push(11);
	//still showed that queue is fulled
	// bcz array in which we stored elements exceeded its limit

	q.pop();
	q.display();
	q.pop();
	q.display();
	q.pop();
	q.display();
	q.pop();
	q.display();
	q.pop();
	q.display();

	//popped after empty
	q.pop();
	cout<<q.size()<<endl; //O(1)


	return 0;

}