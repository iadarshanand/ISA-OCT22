#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
	int data;
	Node *next, *prev;

	//constructor
	Node()
	{
		next=NULL;
		prev=NULL;
	}
	//Parameterized
	Node(int data)
	{
		this->data=data;
		this->next=NULL;
		this->prev=NULL;
	}
};

void InsertNodeAtTail(Node* &head, Node* &tail, int data)
{
	Node* newNode=new Node(data);
	if(head==NULL)
	{
		head=newNode;
		tail=head;
		return;
	}
	//otherwise
	tail->next=newNode;
	tail->next->prev=tail;
	tail=tail->next;

}

void deleteAtTail(Node* &head, Node* &tail)
{
	if(head==NULL)
	{
		cout<<"Double Linked List is Empty"<<endl;
		return;
	}
	if(head==tail)
	{
		head=NULL;
		tail=NULL;
		return;
	}

	//otherwise
	tail->prev->next=NULL;
	tail=tail->prev;



}
void print(Node* &head)
{
	Node* p=head;
	if(!p)
	{
		cout<<"DLL is Empty"<<endl;
		return;
	}
	while(p)
	{
		cout<<p->data<<" ";
		p=p->next;
	}
	cout<<endl;
}

int main()
{
	int n;
	cin>>n;
	Node *head=NULL, *tail=NULL;
	for(int i=0;i<n;i++)
	{
		int ip;
		cin>>ip;

		InsertNodeAtTail(head,tail,ip);
	}
	print(head);
	deleteAtTail(head,tail);
	print(head);
	deleteAtTail(head,tail);
	print(head);
	deleteAtTail(head,tail);
	print(head);
	deleteAtTail(head,tail);
	print(head);	
	deleteAtTail(head,tail);
	print(head);	
	deleteAtTail(head,tail);
	print(head);					
}