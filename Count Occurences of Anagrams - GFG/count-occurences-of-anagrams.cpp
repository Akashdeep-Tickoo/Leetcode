//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	int search(string pat, string txt) {
	    // code here
	    unordered_map<char,int> ourmap;
	    int k=pat.length();
	    for(int i=0;i<k;++i)
	    {
	        ourmap[pat[i]]+=1;
	    }
	    int ans=0;
	    int count;
	    count=ourmap.size();
	    int i=0,j=0;
	    while(j-i+1<k)
	    {
	        if(ourmap.count(txt[j])>0)
	        {
	            ourmap[txt[j]]-=1;
	            if(ourmap[txt[j]]==0)
	            {
	                count-=1;
	            }
	        }
	        ++j;
	    }
	    while(j<txt.length())
	    {
	        if(ourmap.count(txt[j])>0)
	        {
	            ourmap[txt[j]]-=1;
	            if(ourmap[txt[j]]==0)
	            {
	                count-=1;
	            }
	             if(count==0)
	            {
	                ans+=1;
	            }
	        }
	        if(ourmap.count(txt[i])>0)
	        {
	            ourmap[txt[i]]+=1;
	            if(ourmap[txt[i]]==1)
	            {
	                count+=1;
	            }
	        }
	        ++i;
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
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends