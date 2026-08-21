class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
        }
        int pre=0;
        for(int i=0;i<nums.size();i++)
        {
            if(i!=0)
            {
                pre+=nums[i-1];
            }
            int suff=sum-pre-nums[i];
            if(pre==suff)
            {
                return i;
            }
        }
        return -1;
    }
};