
//Question's link: https://leetcode.com/problems/next-greater-element-ii/

#include<bits/stdc++.h>
using namespace std;

    vector<int> nextgreaterM1(vector<int>& a) {
        int n=a.size();
        stack<int>st;
        //update stack
        for(int i=n-1;i>=0;i--)
        {
            while(!st.empty() && st.top()<=a[i])st.pop();

            st.push(a[i]);
        }

        //find next greater element corresponding to each
        vector<int>ans(n);
        for(int i=n-1;i>=0;i--)
        {
            while(!st.empty() && st.top()<=a[i])st.pop();
            if(st.empty())ans[i]=-1;
            else ans[i]=st.top();

            st.push(a[i]);
        }
        return ans;
        
    }

int main()
{
	int n;
	cin>>n;

	vector<int>a(n);
	for(int i=0;i<n;i++)cin>>a[i];

	vector<int>ans=nextgreaterM1(a);

	for(auto x:ans)cout<<x<<" ";
	cout<<endl;

	return 0;

}