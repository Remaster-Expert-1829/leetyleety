class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int i=0;
        int zero=0;
        int one=0;
        unordered_map<int,int> map;
        map[0]=-1;
        int res=0;
        while(i<nums.size())
        {
            if(!nums[i]) zero++;
            else one++;
            int diff=zero-one;
            if(map.count(diff))
            {
                res=max(res,i-map[diff]);
            }
            else
            {
                map[diff]=i;
            }
            i++;
        }
        return res;
    }
};