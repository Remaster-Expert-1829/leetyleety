class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int best=0;
        int res=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            int a=nums[i];
            int b=best+nums[i];
            best=max(a,b);
            res=max(best,res);
        }
        return res;
    }
};