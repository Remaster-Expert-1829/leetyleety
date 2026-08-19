class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int bestmax=0;
        int bestmin=0;
        int res=INT_MIN;
        int minsum=INT_MAX;
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i]; //8
            int a=nums[i]; //
            int b=bestmax+nums[i];
            int c=bestmin+nums[i];
            bestmax=max(a,b);
            bestmin=min(a,c);
            res=max(res,bestmax);
            minsum=min(minsum,bestmin);
        }
        if(sum-minsum==0)
        {
            return res;
        }
        res=max(res,sum-minsum);
        return res;
    }
};