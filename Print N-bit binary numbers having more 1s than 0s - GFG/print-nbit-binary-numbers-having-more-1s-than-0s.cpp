//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
    void helperNbit(int N,vector<string>& ans,string ds,int zero,int one,int n)
    {
        if(zero>one)
        {
            return;
        }
        if(N==0)
        {
            if(zero+one==n)
            {
                ans.push_back(ds);
            }
            return;
        }
        helperNbit(N-1,ans,ds+"1",zero,one+1,n);
        helperNbit(N-1,ans,ds+"0",zero+1,one,n);
    }
	vector<string> NBitBinary(int N)
	{
	    // Your code goes here
	    vector<string> ans;
	    string ds="";
	    helperNbit(N,ans,ds,0,0,N);
	    return ans;
	}
};

//{ Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		int n;
   		cin >> n;
        Solution ob;
   		vector<string> ans = ob.NBitBinary(n);

   		for(auto i:ans)
   			cout << i << " ";

   		cout << "\n";
   	}

    return 0;
}
// } Driver Code Ends