
// ASSIGNMENT QUESTION

// Problem Link:- https://leetcode.com/problems/kth-largest-element-in-an-array/




class Solution {
public:
    int quickSort(int s, int e, int n, int k, vector<int>&a)
    {
        int pivot=a[e];
        int idx=s-1;
        for(int i=s;i<e;i++)
        {
            if(a[i]<=pivot)
            {
                idx++;
                swap(a[i],a[idx]);
            }
        }
        idx++;
        swap(a[idx],a[e]);
        
        if(idx==k)return a[idx];
        
        if(idx<k)return quickSort(idx+1,e,n,k,a);
        else return quickSort(s,idx-1,n,k,a);
    }
    
    int findKthLargest(vector<int>& a, int k) {
        int n=a.size();
        k=n-k;
        return quickSort(0,n-1,n,k,a);
        
    }
};