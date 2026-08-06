class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int id=-1;
        for(int i=0;i<nums.size();i++)
        {
            if(i!=nums.size()-1 && nums[i]<0 && nums[i+1]>=0)
            {
                id=i;
            }
        }
        vector<int> v;
        if(id<0)
        {
            if(nums[0]>=0)
            {
                vector<int> v;
                for(int i=0;i<nums.size();i++)
                {
                    v.push_back(nums[i]*nums[i]);
                }
                return v;
            }
            else
            {
                vector<int> v;
                for(int i=nums.size()-1;i>=0;i--)
                {
                    v.push_back(nums[i]*nums[i]);
                }
                return v;
            }
            
        }
        int i=id;
        int j=id+1;
        while(i!=-1 && j!=nums.size())
        {
            if(nums[i]*nums[i]<=nums[j]*nums[j])
            {
                v.push_back(nums[i]*nums[i]);
                i--;
            }
            else
            {
                v.push_back(nums[j]*nums[j]);
                j++;
            }
        }
        while(i!=-1)
        {
            v.push_back(nums[i]*nums[i]);
            i--;
        }
        while(j!=nums.size())
        {
            v.push_back(nums[j]*nums[j]);
            j++;
        }
        return v;
    }
};