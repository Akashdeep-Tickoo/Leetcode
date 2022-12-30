//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        // code here
        int p=0;
        int* array=new int[n+1]{0};
        int* brr=new int[2];
        for(int i=0;i<n;++i)
        {
            ++array[arr[i]];
        }
        for(int i=0;i<n+1;++i)
        {
            if(array[i]==2)
            {
                brr[p]=i;
                ++p;
            }
        }
        for(int i=1;i<n+1;++i)
        {
            if(array[i]==0)
            {
                brr[p]=i;
                ++p;
            }
        }
        return brr;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends