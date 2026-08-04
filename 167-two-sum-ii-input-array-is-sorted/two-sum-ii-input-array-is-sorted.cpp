class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int first=0;
        int second=numbers.size()-1;
        while(first<second)
        {
            int sum=numbers[first]+numbers[second];
            if(sum==target)
            {
                vector<int> v={first+1, second+1};
                return v;
            }
            if(sum>target)
            {
                second--;
            }
            else
            {
                first++;
            }
        }
        vector<int> v(2,-1);
        return v;
    }
};