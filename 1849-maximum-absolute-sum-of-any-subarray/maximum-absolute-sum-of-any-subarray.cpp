class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int bestmin=0;
        int bestmax=0;
        int res=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            int a=nums[i];
            int b=bestmax+nums[i];
            int c=bestmin+nums[i];
            bestmax=max(a,b);
            bestmin=min(a,c);
            res=max(res,max(abs(bestmax),abs(bestmin)));
        }
        return res;
    }
};