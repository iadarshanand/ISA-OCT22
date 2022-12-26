#include<bits/stdc++.h>
using namespace std;

void printBoard(vector<vector<char>>&board, int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<board[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
}

bool isSafe(int row, int col, int n, vector<vector<char>>&board)
{
	// col wise check
	for(int i=row;i>=0;i--)
	{
		if(board[i][col]=='Q')return false;
	}

	//left upward diogonal check
	int i=row,j=col;
	while(i>=0 && j>=0)
	{
		if(board[i][j]=='Q')
			{
				return false;
			}
		i--;
		j--;
	}

	//right upward diagonal check
	i=row,j=col;
	while(i>=0 && j<n)
	{
		if(board[i][j]=='Q')
		{
			return false;
		}
		i--;
		j++;
	}

	return true;
}

void NqueenHelper(int row, int n, vector<vector<char>>&board)
{
	//Base Case
	if(row==n)
	{
		printBoard(board,n);
		return;
	}

	//Recursive Case
	for(int col=0;col<n;col++)
	{
		bool chk=isSafe(row,col,n,board);

		if(chk)
		{
			//i.e curr block is safe
			board[row][col]='Q';
			NqueenHelper(row+1,n,board); 
			//Backtracking
			board[row][col]='-';
		}
	}

}

void Nqueen(int n)
{
	vector<vector<char>>board(n,vector<char>(n,'-'));
	NqueenHelper(0,n,board);


}

int main()
{
	int n;
	cin>>n;

	Nqueen(n);
	return 0;

}