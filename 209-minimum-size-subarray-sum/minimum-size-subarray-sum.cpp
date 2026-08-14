class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int low=0;
        int high=0;
        int res=INT_MAX;
        int sum=0;
        for(int i=low;i<=high;i++)
        {
            sum+=nums[i];
        }
        while(high<nums.size())
        {
            if(sum<target)
            {
                high++;
                if(high>=nums.size())
                {
                    break;
                }
                sum+=nums[high];
            }
            else
            {
                res=min(res,high-low+1);
                low++;
                sum-=nums[low-1];
            }
        }
        if(res==INT_MAX)
        {
            return 0;
        }
        return res;
    }
};