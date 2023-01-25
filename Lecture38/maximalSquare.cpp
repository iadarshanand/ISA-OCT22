// Question's Link: https://leetcode.com/problems/maximal-square/

    int f(vector<int>&a)
    {
        int n=a.size();
        
        // for(auto x:a)cout<<x<<" ";
        // cout<<endl;
        
        //Left first smaller
        vector<int>left(n);
        stack<int>st1;
        for(int i=0;i<n;i++)
        {
            int val=a[i];
            while(!st1.empty() && a[st1.top()]>=val)st1.pop();
            left[i]=st1.empty()?0:st1.top()+1;
            st1.push(i);
        }
        
        //Right first smaller
        vector<int>right(n);
        stack<int>st2;
        for(int i=n-1;i>=0;i--)
        {
            int val=a[i];
            while(!st2.empty() && a[st2.top()]>=val)st2.pop();
            right[i]=st2.empty()?n-1:st2.top()-1;
            st2.push(i);
        }
        //debug
//         for(auto x:left)cout<<x<<" ";
//         cout<<endl;
        
//         for(auto x:right)cout<<x<<" ";
//         cout<<endl;   
        
       
        
        int area=0;
        for(int i=0;i<n;i++)
        {
            int side=min(right[i]-left[i]+1,a[i]);
            area=max(area,(side*side));
        }
        cout<<area<<endl;
        return area;
        
    }
    
    int maximalSquare(vector<vector<char>>& a) {
        int n=a.size();
        int m=a[0].size();
        
        vector<int>temp(m,0);
        int ans=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(a[i][j]=='0')temp[j]=0;
                else temp[j]+=1;
            }
            ans=max(ans,f(temp));
        }
        return ans;
        
    }