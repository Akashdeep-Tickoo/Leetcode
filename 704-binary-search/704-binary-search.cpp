class Solution {
public:
    int search(vector<int>& nums,int si,int ei,int target)
    {
        int mid=(si+ei)/2;
        if(si>ei)
        {
            return -1;
        }
        else if(nums[mid]==target)
        {
            return mid;
        }
        else
        {
            if(target<nums[mid])
            {
                ei=mid-1;
            }
            else if(target>nums[mid])
            {
                si=mid+1;
            }
            int x=search(nums,si,ei,target);
            return x;
        }
    }
    int search(vector<int>& nums, int target) {
        int si=0;
        int ei=nums.size()-1;
        int index=search(nums,si,ei,target);
        return index;
    }
};