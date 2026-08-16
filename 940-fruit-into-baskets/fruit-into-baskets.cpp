class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int low=0;
        int high=0;
        int res=INT_MIN;
        unordered_map<int,int> m;
        m[fruits[high]]++;
        while(high<fruits.size())
        {
            while(m.size()>2)
            {
                low++;
                m[fruits[low-1]]--;
                if(m[fruits[low-1]]==0)
                {
                    m.erase(fruits[low-1]);
                }
            }
            res=max(res,high-low+1);
            high++;
            if(high>=fruits.size())
            {
                break;
            }
            m[fruits[high]]++;
        }
        return res;
    }
};