//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    int khelper(int W, int wt[], int val[], int n,int arr[1002][1002])
    {
        if(n==0)
        {
            return 0;
        }
        if(arr[n][W]!=-1)
        {
            return arr[n][W];
        }
        if(wt[n-1]<=W)
        {
            int a=val[n-1]+khelper(W-wt[n-1],wt,val,n-1,arr);
            int b=khelper(W,wt,val,n-1,arr);
            return arr[n][W]=max(a,b);
        }
        if(wt[n-1]>W)
        {
            return arr[n][W]=khelper(W,wt,val,n-1,arr);
        }
    }
    //Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       // Your code here
       int arr[1002][1002];
       memset(arr,-1,sizeof(arr));
       return khelper(W,wt,val,n,arr);
    }
};

//{ Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}
// } Driver Code Ends