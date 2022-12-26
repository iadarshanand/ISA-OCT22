class Solution{
    public:
    vector<string>ans;
    
    void RatinMaze(int i, int j, int n, string &s, vector<vector<int>> &a, vector<vector<bool>>&vis)
    {
        //Base Case
        if(i==n-1 && j==n-1)
        {
            ans.push_back(s);
            return;
        }
        
        //Recursive Case
        // call downward
        if(i+1<n && a[i+1][j]==1 && !vis[i+1][j])
        {
            vis[i+1][j]=true;
            s+='D';
            RatinMaze(i+1,j,n,s,a,vis);
            
            //Backtracking
            s.pop_back();
            vis[i+1][j]=false;
        }
        
        //call left
        if(j-1>=0 && a[i][j-1]==1 && !vis[i][j-1])
        {
            vis[i][j-1]=true;
            s+='L';
            RatinMaze(i,j-1,n,s,a,vis);
            
            //Backtracking
            s.pop_back();
            vis[i][j-1]=false;
        }
        
        //call right
        if(j+1<n && a[i][j+1]==1 && !vis[i][j+1])
        {
            vis[i][j+1]=true;
            s+='R';
            RatinMaze(i,j+1,n,s,a,vis);
            
            //Backtracking
            s.pop_back();
            vis[i][j+1]=false;
        }
        
        //call up
        if(i-1>=0 && a[i-1][j]==1 && !vis[i-1][j])
        {
            vis[i-1][j]=true;
            s+='U';
            RatinMaze(i-1,j,n,s,a,vis);
            
            //Backtracking
            s.pop_back();
            vis[i-1][j]=false;
        }
    }
    
    vector<string> findPath(vector<vector<int>> &a, int n) {
        ans.clear();
        string s;
        
        if(a[0][0]==0 || a[n-1][n-1]==0)return ans;
        
        vector<vector<bool>>vis(n,vector<bool>(n,false)); //vis matrix of boolean type
        
        RatinMaze(0,0,n,s,a,vis);
        return ans;
    }
};