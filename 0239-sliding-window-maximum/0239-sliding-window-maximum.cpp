class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;
        list<int> l;
        int i=0,j=0;
        if(k>nums.size())
    {
        ans.push_back(*max_element(nums.begin(),nums.end()));
        return ans;
    }
        while(j-i+1<k)
        {
            if(l.size()>0)
            {
                while(!l.empty()&&l.back()<nums[j])
                {
                    l.pop_back();
                }
                l.push_back(nums[j]);
            }
            else
            {
                l.push_back(nums[j]);
            }
            ++j;
        }
        while(j<nums.size())
        {
             while(!l.empty()&&l.back()<nums[j])
                {
                    l.pop_back();
                }
                l.push_back(nums[j]);
            ans.push_back(l.front());
            if(l.front()==nums[i])
            {
                l.pop_front();
            }
            ++i;
            ++j;
        }
        return ans;
    }
};