class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int bestmin=1;
        int bestmax=1;
        int res=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            int a=nums[i];
            int b=bestmax*nums[i];
            int c=bestmin*nums[i];
            bestmax=max(a,max(b,c));
            bestmin=min(a,min(b,c));
            res=max(bestmax,res);
        }
        return res;
    }
};