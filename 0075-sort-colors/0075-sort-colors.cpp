class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zero=0,one=0,two=0;
        for(int i=0;i<nums.size();++i)
        {
            if(nums[i]==0)
            {
                ++zero;
            }
            if(nums[i]==1)
            {
                ++one;
            }
            if(nums[i]==2)
            {
                ++two;
            }
        }
        int a=0;
        for(int i=0;i<zero;++i)
        {
            nums[a]=0;
            ++a;
        }
        for(int i=0;i<one;++i)
        {
            nums[a]=1;
            ++a;
        }for(int i=0;i<two;++i)
        {
            nums[a]=2;
            ++a;
        }
    }
};