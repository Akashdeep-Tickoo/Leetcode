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
    int getPairsCount(int arr[], int n, int k) {
        // code here
        unordered_map<int,int>ourmap;
        int ans=0;
        for(int i=0;i<n;++i)
        {
            int x=k-arr[i];
            if(ourmap.count(x)!=0)
            {
                ans+=ourmap[x];
            }
            ourmap[arr[i]]=ourmap[arr[i]]+1;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getPairsCount(arr, n, k);
        cout << ans << "\n";
    }
    
    return 0;
}
// } Driver Code Ends