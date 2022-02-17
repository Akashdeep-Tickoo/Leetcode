// { Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
   public:
    int print2largest(int arr[], int arr_size)
    {
    	//code here.
    	int max=arr[0],smax=-1;
    	for(int i=0;i<arr_size;++i)
    	{
    	    if(arr[i]>max)
    	    {
    	        smax=max;
    	        max=arr[i];
    	    }
    	    else if(arr[i]<max&&arr[i]>smax)
    	    {
    	        smax=arr[i];
    	    }
    	}
    	return smax;
    }

};

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	      cin>>arr[i];
	    Solution ob;  
	    int ans=ob.print2largest(arr, n);
	    cout<<ans;
	    cout<<"\n";
	}
	return 0;
}
  // } Driver Code Ends