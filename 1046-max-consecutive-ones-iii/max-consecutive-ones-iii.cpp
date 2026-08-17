class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int low=0;
        int high=0;
        vector<int> v(2,0);
        v[nums[high]]++;
        int res=0;
        while(high<nums.size())
        {
            while(high-low+1-v[1] > k)
            {
                low++;
                v[nums[low-1]]--;
            }
            res=max(res,high-low+1);
            high++;
            if(high>=nums.size())
            {
                break;
            }
            v[nums[high]]++;
        }
        return res;
    }
};