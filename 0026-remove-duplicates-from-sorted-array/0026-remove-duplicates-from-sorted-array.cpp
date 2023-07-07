class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int,int>ourmap;
        for(int i=0;i<nums.size();++i)
        {
            ourmap[nums[i]]+=1;
        }
        int p=0;
        map<int,int>::iterator it=ourmap.begin();
        while(it!=ourmap.end())
        {
            nums[p]=it->first;
            ++p;
            ++it;
        }
        return p;

    }
};