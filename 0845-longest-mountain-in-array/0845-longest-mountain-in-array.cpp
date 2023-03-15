class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int ans=0;
        int n=arr.size();
        for(int i=1;i<n-1;++i)
        {
            int lcount=0;
            int rcount=0;
            if(arr[i]>arr[i-1]&&arr[i]>arr[i+1])
            {
                for(int j=i-1;j>=0;--j)
                {
                    if(arr[j]>=arr[j+1])
                    {
                        break;
                    }
                    else
                    {
                        ++lcount;
                    }
                }
                for(int j=i+1;j<n;++j)
                {
                    if(arr[j]>=arr[j-1])
                    {
                        break;
                    }
                    else
                    {
                        ++rcount;
                    }
                }
                ans=max(ans,lcount+rcount+1);
            }
        }
        return ans;
    }
};