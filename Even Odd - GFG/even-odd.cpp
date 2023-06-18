//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    void evenOdd(int a, int b){
        // Code here
        int first,second;
        int temp1,temp2;
        temp1=(a&1);
        if(temp1==0)
        {
            first=a;
        }
        else
        {
            second=a;
        }
        temp2=(b&1);
        if(temp2==0)
        {
            first=b;
        }
        else
        {
            second=b;
        }
        cout<<first<<endl;
        cout<<second<<endl;
        
    }
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--){
        int a, b;
        cin >> a >> b;
        Solution obj;
        obj.evenOdd(a, b);
    }
    return 0;
}
// } Driver Code Ends