//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

#include<bits/stdc++.h>
using namespace std;
class Solution 
{
    public:
    //Function to find the minimum number of swaps required to sort the array. 
	int minSwaps(vector<int>&nums)
	{
	    // Code here
	    int n=nums.size();
	    pair<int,int> arr[n];
	    for(int i=0;i<n;++i)
	    {
	        arr[i].first=nums[i];
	        arr[i].second=i;
	    }
	    sort(arr,arr+n);
	    vector<bool>v(n,false);
	    int ans=0;
	    for(int i=0;i<n;++i)
	    {
	        int count=0;
	        int index=i;
	        while(v[index]==false)
	        {
	            int nextIndex=arr[index].second;
	            v[index]=true;
	            ++count;
	            index=nextIndex;

	        }

	        if(count)
	        {
	            ans+=count-1;
	        }
	
	    }
	    
	    return ans;
	    
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)
			cin >> nums[i];
		Solution obj;
		int ans = obj.minSwaps(nums);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends