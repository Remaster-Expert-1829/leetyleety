class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int low=0;
        int high=0;
        int res=0;
        unordered_map<char,int> m;
        m[s[high]]++;
        while(high<s.size())
        {
            while(m.size()<high-low+1)
            {
                low++;
                m[s[low-1]]--;
                if(m[s[low-1]]==0)
                {
                    m.erase(s[low-1]);
                }
            }
            res=max(res,high-low+1);
            high++;
            if(high>=s.size())
            {
                break;
            }
            m[s[high]]++;
        }
        return res;
    }
};