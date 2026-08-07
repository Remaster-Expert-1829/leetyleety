class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> v;
        int si=nums.size();
        for(int i=0;i<=si-2;i++) //writing nums.size()-2 is dangerous as it returns unsigned int and can cause overflow in int as if the size of array was 1 then it will become negative and loop back to INT_MAX 
        {
            if(i!=0 && nums[i]==nums[i-1])
            {
                continue;
            }
            int j=i+1;
            int k=nums.size()-1;
            while(j<k)
            {
                if(nums[j]+nums[k]==-nums[i])
                {
                    vector<int> temp;
                    temp.push_back(nums[i]);
                    temp.push_back(nums[j]);
                    temp.push_back(nums[k]);
                    v.push_back(temp);
                    j++;
                    k--;
                    while(j<k && nums[j]==nums[j-1])
                    {
                        j++;
                    }
                    while(j<k && nums[k]==nums[k+1])
                    {
                        k--;
                    }
                }
                else if(nums[j]+nums[k]>-nums[i])
                {
                    k--;
                }
                else
                {
                    j++;
                }
            }
        }
        return v;
    }
};