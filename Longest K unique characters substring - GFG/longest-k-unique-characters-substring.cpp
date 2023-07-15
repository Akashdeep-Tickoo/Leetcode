//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
#include<bits/stdc++.h>
using namespace std;
class Solution{
  public:
    int longestKSubstr(string s, int k) {
    // your code here
    unordered_map<char,int>ourmap;
    int ans=-1;
    int i=0,j=0;
    while(j<s.length()){
         ourmap[s[j]]+=1;
        while(ourmap.size()>k)
        {
            ourmap[s[i]]-=1;
            if(ourmap[s[i]]==0)
            {
                ourmap.erase(s[i]);
            }
            ++i;
        }
        if(ourmap.size()==k)
        {
            ans=max(ans,j-i+1);
        }
       
        ++j;
    }
    return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}

// } Driver Code Ends