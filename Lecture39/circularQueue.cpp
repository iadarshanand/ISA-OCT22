#include<iostream>
using namespace std;

class queue
{
public:
	int a[5];
	int first,last;
	int n,sz;

	//constructor
	queue()
	{
		first=0,last=0;
		n=5;
		sz=0;
	}

	//fn
	void push(int val)
	{
		if(isFull())
		{
			cout<<"queue is already fulled"<<endl;
			return;
		}
		a[last]=val;
		last=(last+1)%n;
		sz++;
	}

	void pop()
	{
		if(empty())
		{
			cout<<"Queue is already empty"<<endl;
			return;
		}
		first=(first+1)%n;
		sz--;
	}


	bool isFull()
	{
		return size()==n;
	}
	bool empty()
	{
		return size()==0;
	}
	int size()
	{
		return sz;
	}

	void display()
	{
		if(size()==0)
		{
			cout<<"queue is empty"<<endl;
			return;
		}
		
		// case 1(first<last)
		if(first<last)
		{
			for(int i=first;i<last;i++)cout<<a[i]<<" ";
			cout<<endl;
		}
		else // case 2
		{
			//i.e first>=last
			//first print first to n-1
			for(int i=first;i<n;i++)cout<<a[i]<<" ";
			// print 0 to last-1
			for(int i=0;i<last;i++)cout<<a[i]<<" ";
			cout<<endl;

		}

		//Alternative by shabbir
		// cout<<a[first]<<" ";
		// for(int i=first+1;i!=last;i=(i+1)%n)cout<<a[i]<<" ";
		// cout<<endl;

	}

};

int main()
{
	queue q;

	q.push(1);
	q.display();
	q.push(2);
	q.display();
	q.push(3);
	q.display();
	q.push(4);
	q.display();
	q.push(5);
	q.display();
	cout<<q.size()<<endl;
	q.push(6);
	q.display();

	//popping out
	q.pop();
	q.pop();
	cout<<q.size()<<endl;
	q.display();

	//reUse our spaces
	q.push(6);
	q.display();
	cout<<q.size()<<endl;
	q.push(7);
	cout<<q.size()<<endl;
	q.display();
	q.push(8);




	return 0;

}