
//Question's link: https://leetcode.com/problems/next-greater-element-ii/

#include<bits/stdc++.h>
using namespace std;

   vector<int> nextgreaterM2(vector<int>& a) {
        int n=a.size();
        stack<int>st;
        vector<int>ans(n);
        //update stack
        for(int i=2*n-1;i>=0;i--)
        {
            while(!st.empty() && st.top()<=a[i%n])st.pop();
            if(st.empty())ans[i%n]=-1;
            else ans[i%n]=st.top();

            st.push(a[i%n]);
        }

        return ans;
        
    }

int main()
{
	int n;
	cin>>n;

	vector<int>a(n);
	for(int i=0;i<n;i++)cin>>a[i];

	vector<int>ans=nextgreaterM2(a);

	for(auto x:ans)cout<<x<<" ";
	cout<<endl;

	return 0;

}