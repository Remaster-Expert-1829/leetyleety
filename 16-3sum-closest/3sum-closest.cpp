class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int maxd=INT_MAX;
        int res=0;
        for(int i=0;i<n-2;i++)
        {
            int j=i+1;
            int k=nums.size()-1;
            while(j<k)
            {
                int dist=abs((nums[i]+nums[j]+nums[k])-target);
                if(maxd>dist)
                {
                    maxd=dist;
                    res=nums[i]+nums[j]+nums[k];
                }
                if(nums[j]+nums[k]==target-nums[i])
                {
                    return target;
                }
                else if(nums[j]+nums[k]<target-nums[i])
                {
                    j++;
                }
                else
                {
                    k--;
                }
            }
        }
        return res;
    }
};