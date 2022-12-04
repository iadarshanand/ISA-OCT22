//ASSIGNMENT QUESTION

// Problem Link:- https://leetcode.com/problems/count-of-smaller-numbers-after-self/




vector<pair<int,int>>temp(100007);

class Solution {
public:
    
    void merge(int start, int mid, int end, vector<pair<int,int>>&a, vector<int>&ans)
    {
        // vector<pair<int,int>>v;
        int j1=start;
        
        int i=start,j=mid+1;
        int k=start;
        while(i<=mid && j<=end)
        {
            if(a[i].first>a[j].first)
            {
                temp[k]=a[j];
                j++;
                k++;
            }
            else
            {
                temp[k]=a[i];
                ans[a[i].second]+=j-j1;
                i++;
                k++;
            }
        }
        while(i<=mid)
        {
            temp[k]=a[i];
            ans[a[i].second]+=j-j1;
            i++;
            k++;
        }
        while(j<=end)
        {
            temp[k]=a[j];
            j++;
            k++;
        }
        
        for(int i=start;i<=end;i++)a[i]=temp[i];
        // for(auto x:v)cout<<x.first<<"-->"<<x.second<<"  ";
        // cout<<endl;
    }
    
    void divide(int start, int end, vector<pair<int,int>>&a, vector<int>&ans)
    {
        //Base Case
        if(start==end)return;
        
        int mid=(start+end)/2;
        divide(start,mid,a,ans);
        divide(mid+1,end,a,ans);
        
        merge(start,mid,end,a,ans);
    }
    
    vector<int> countSmaller(vector<int>& a) {
        int n=a.size();
        vector<int>ans(n,0);
        vector<pair<int,int>>v;
        for(int i=0;i<n;i++)v.push_back({a[i],i});
        // for(auto x:v)cout<<x.first<<" "<<x.second<<endl;
        divide(0,n-1,v,ans);
        return ans;
        
    }
};