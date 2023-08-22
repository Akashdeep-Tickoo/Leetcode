//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       // Your code here
       int arr[1002][1002];
       memset(arr,-1,sizeof(arr));
       for(int i=0;i<n+1;++i)
       {
           for(int j=0;j<W+1;++j)
           {
               if(i==0||j==0)
               {
                   arr[i][j]=0;
               }
           }
       }
       for(int i=1;i<n+1;++i)
       {
           for(int j=1;j<W+1;++j)
           {
               if(wt[i-1]<=j)
               {
                   int a=val[i-1]+arr[i-1][j-wt[i-1]];
                   int b=arr[i-1][j];
                   arr[i][j]=max(a,b);
               }
               else if(wt[i-1]>j)
               {
                   arr[i][j]=arr[i-1][j];
               }
           }
       }
       return arr[n][W];
       
       
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