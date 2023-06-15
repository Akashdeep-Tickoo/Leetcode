//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function Template for C++
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minimizeSum(int N, vector<int> arr) {
        // code here
        priority_queue<int,vector<int>,greater<int>>pq;
        for(int x:arr)
        {
            pq.push(x);
        }
        int ans=0;
        while(!pq.empty())
        {
            int x,y;
            x=pq.top();
            pq.pop();
            if(pq.empty())
            {
                return ans;
            }
            y=pq.top();
            pq.pop();
            int num=x+y;
            ans+=num;
            pq.push(num);
            
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
	int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++)
            cin>>arr[i];
        Solution obj;
        cout << obj.minimizeSum(n, arr) << "\n";
    }
}
// } Driver Code Ends