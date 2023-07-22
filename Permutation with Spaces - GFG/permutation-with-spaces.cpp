//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
public:
    void helper(string S,vector<string>& ans,string ds)
    {
        if(S.length()==1)
        {
            ds+=S[0];
            ans.push_back(ds);
            return;
        }
        ds+=S[0];
        helper(S.substr(1),ans,ds);
        ds+=" ";
        helper(S.substr(1),ans,ds);
    }
    vector<string> permutation(string S){
        // Code Here
        vector<string> ans;
        string ds="";
        helper(S,ans,ds);
        sort(ans.begin(),ans.end());
        return ans;
    }
};

//{ Driver Code Starts.

int  main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        vector<string> ans;
        Solution obj;
        ans = obj.permutation(S);
        for(int i=0;i<ans.size();i++){
            cout<<"("<<ans[i]<<")";
        }
        cout << endl;
    }
}

// } Driver Code Ends