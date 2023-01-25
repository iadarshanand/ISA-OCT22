   
//Question's Link: https://leetcode.com/problems/largest-rectangle-in-histogram/

    vector<int>prevSmaller(vector<int>&a)
    {
        int n=a.size();

        stack<int>st;
        vector<int>left(n);
        for(int i=0;i<n;i++)
        {
            while(!st.empty() && a[st.top()]>=a[i])st.pop();
            if(st.empty())left[i]=-1;
            else left[i]=st.top();

            st.push(i);
        }
        return left;
    }

    vector<int>nextSmaller(vector<int>&a)
    {
        int n=a.size();

        vector<int>right(n);
        stack<int>st;

        for(int i=n-1;i>=0;i--)
        {
            while(!st.empty() && a[st.top()]>=a[i])st.pop();
            if(st.empty())right[i]=n;
            else right[i]=st.top();

            st.push(i);
        }
        return right;
    }

    int largestRectangleArea(vector<int>& a) {
        int n=a.size();

        vector<int>left=prevSmaller(a);
        vector<int>right=nextSmaller(a);
        // for(auto x:left)cout<<x<<" ";
        // cout<<endl;
        // for(auto x:right)cout<<x<<" ";
        // cout<<endl;

        int ans=0;
        for(int i=0;i<n;i++)
        {
            ans=max(ans,(right[i]-left[i]-1)*a[i]);
        }
        return ans;
        
    }