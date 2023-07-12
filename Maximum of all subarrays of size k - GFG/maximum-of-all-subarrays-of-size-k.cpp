//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        // your code here
        vector<int> ans;
        list<int>ds;
        int i=0,j=0;
        while(j-i+1<k)
        {
            while(!ds.empty()&&ds.back()<arr[j])
            {
                ds.pop_back();
            }
            ds.push_back(arr[j]);
            ++j;
        }
        while(j<n)
        {
            while(!ds.empty()&&ds.back()<arr[j])
            {
                ds.pop_back();
            }
            ds.push_back(arr[j]);
            ++j;
            ans.push_back(ds.front());
            if(ds.front()==arr[i])
            {
                ds.pop_front();
            }
            ++i;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, k;
	    cin >> n >> k;
	    
	    int arr[n];
	    for(int i = 0;i<n;i++) 
	        cin >> arr[i];
	    Solution ob;
	    vector <int> res = ob.max_of_subarrays(arr, n, k);
	    for (int i = 0; i < res.size (); i++) 
	        cout << res[i] << " ";
	    cout << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends