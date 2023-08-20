//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends




class Solution
{
    public:
    
    
     int knapHelper(int W,int wt[],int val[],int n,int arr[1002][1002])
    {
        if(n==0||W==0)
        {
            return 0;
        }
        if(arr[n-1][W-1]!=-1)
        {
            return arr[n-1][W-1];
        }
        if(wt[n-1]<=W)
        {
            return arr[n-1][W-1]=max(val[n-1]+knapHelper(W-wt[n-1],wt,val,n-1,arr),knapHelper(W,wt,val,n-1,arr));
        }
        else if(wt[n-1]>W)
        {
            return arr[n-1][W-1]=knapHelper(W,wt,val,n-1,arr);
        }
    }
    //Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int W, int wt[], int val[], int n) 
    { 
        int arr[1002][1002];
        memset(arr, -1, sizeof(arr));
        
       int ans=knapHelper(W,wt,val,n,arr);
       return ans;
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