class Solution {
public:
    
    void par(int n,int i,string ds,int l,int r,vector<string>& ans)
    {
        if(i>(2*n))
        {
            return;
        }
        if(l>n||r>n)
        {
            return;
        }
        if(r>l)
        {
            return;
        }
        if(i==(2*n))
        {
            if(l==r)
            {
                ans.push_back(ds);
            }
        }
        par(n,i+1,ds+"(",l+1,r,ans);
        par(n,i+1,ds+")",l,r+1,ans);
        
    }
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        string ds="";
        par(n,0,ds,0,0,ans);
        return ans;
        
        
    }
};