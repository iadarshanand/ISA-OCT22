#include <bits/stdc++.h>
using namespace std;

bool isCelebrity(vector<vector<int>>&a, int idx)
{
    int n=a.size();
    for(int i=0;i<n;i++)
    {
        if(a[idx][i]==1)return false;
        if(i!=idx && a[i][idx]==0)return false;
    }
    return true;
}

int main()
{
    int n;
    cin>>n;
    vector<vector<int>>a(n,vector<int>(n));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        cin>>a[i][j];
    }

    int i=0,j=n-1;
    while(i<j)
    {
        if(a[i][j]==1)i++;
        else j--;
    }

    int possibleCelebrity=i;

    // cout<<possibleCelebrity<<endl;

    bool chk=isCelebrity(a,possibleCelebrity);
    if(chk)cout<<possibleCelebrity<<endl;
    else cout<<"No Celebrity"<<endl;
}