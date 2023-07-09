//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    long maximumSumSubarray(int K, vector<int> &Arr , int N){
        long ans=0;
        long sum=0;
        int p=0;
        int i;
        for(i=0;i<K;++i)
        {
            sum+=Arr[i];
        }
        ans=sum;
        while(i<N)
        {
            sum-=Arr[p];
            ++p;
            sum+=Arr[i];
            ++i;
            ans=max(ans,sum);
        }
        return ans;
        
        
        // code here 
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends