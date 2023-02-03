#include<bits/stdc++.h>
using namespace std;

class node
{
public:
	int data;
	node* left;
	node* right;

	//constructor
	node(int data)
	{
		this->data=data;
		this->left=NULL;
		this->right=NULL;
	}
};

node* buildBTreePreOrderWise()
{
	int d;
	cin>>d;
	if(d==-1)return NULL;

	//otherwise
	node* root=new node(d);
	root->left=buildBTreePreOrderWise();
	root->right=buildBTreePreOrderWise();

	return root;
}

void printPreOrderWise(node* root)
{
	//Base Case
	if(!root) //i.e root==NULL
	{
		return;
	}

	//Recursive Case
	cout<<root->data<<" ";
	printPreOrderWise(root->left);
	printPreOrderWise(root->right);
}

void printInorderWise(node* root)
{
	//Base Case
	if(!root)return;

	//Recursive Case
	printInorderWise(root->left);
	cout<<root->data<<" ";
	printInorderWise(root->right);
}

void printPostOrderWise(node* root)
{
	//Base Case
	if(!root)return;

	//Recursive Case
	printPostOrderWise(root->left);
	printPostOrderWise(root->right);
	cout<<root->data<<" ";
}

void printLevelOrderWise(node* root)
{
	if(!root)
	{
		cout<<"Tree is empty"<<endl;
		return;
	}
	queue<node*>q;
	q.push(root);

	while(!q.empty())
	{
		node* temp=q.front();
		q.pop();
		cout<<temp->data<<" ";

		if(temp->left!=NULL)q.push(temp->left);
		if(temp->right!=NULL)q.push(temp->right);
	}
}

void printRowWise(node* root)
{
	if(!root)
	{
		cout<<"Tree is empty"<<endl;
		return;
	}

	queue<node*>q;
	q.push(root);

	while(!q.empty())
	{
		int sz=q.size();
		for(int i=0;i<sz;i++)
		{
			node* temp=q.front();
			q.pop();

			cout<<temp->data<<" ";
			if(temp->left!=NULL)q.push(temp->left);
			if(temp->right!=NULL)q.push(temp->right);
		}
		cout<<endl;
	}

}

void printPreOrderIteratively(node* root)
{
	if(!root)
	{
		cout<<"Tree is empty"<<endl;
		return;
	}

	stack<node*>st;
	st.push(root);

	while(!st.empty())
	{
		auto temp=st.top();
		st.pop();

		cout<<temp->data<<" ";
		if(temp->right!=NULL)st.push(temp->right);
		if(temp->left!=NULL)st.push(temp->left);
	}
}

void printZigZag(node* root)
{
	if(!root)
	{
		cout<<"Tree is empty"<<endl;
		return;
	}

	queue<node*>q;
	
	int level=0;
	q.push(root);
	while(!q.empty())
	{
		int sz=q.size();
		vector<int>row;
		for(int i=0;i<sz;i++)
		{
			node* temp=q.front();
			q.pop();

			row.push_back(temp->data);
			if(temp->left!=NULL)q.push(temp->left);
			if(temp->right!=NULL)q.push(temp->right);
		}
		if(level%2==1)reverse(row.begin(),row.end());
		level++;

		//print row
		for(auto x:row)cout<<x<<" ";
	}
}

int heightBT(node* root)
{
	//Base Case
	if(root==NULL)return 0;

	//Recursive Case
	int op1=heightBT(root->left);
	int op2=heightBT(root->right);

	return max(op1,op2)+1;
}

int countNode(node* root)
{
	//Base Case
	if(root==NULL)return 0;

	//Recursive Case
	int op1=countNode(root->left);
	int op2=countNode(root->right);

	return op1+op2+1;
}

int main()
{
	node* root=buildBTreePreOrderWise();
	printPreOrderWise(root);
	cout<<endl;
	printInorderWise(root);
	cout<<endl;
	printPostOrderWise(root);
	cout<<endl;

	printLevelOrderWise(root);
	cout<<endl;

	printRowWise(root);
	cout<<endl;

	printPreOrderIteratively(root);
	cout<<endl;

	printZigZag(root);
	cout<<endl;

	cout<<"height of BT is "<<heightBT(root)<<endl;

	cout<<"Total count of nodes in BT is "<<countNode(root)<<endl;
}