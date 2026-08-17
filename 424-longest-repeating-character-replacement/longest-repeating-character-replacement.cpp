class Solution {
public:
    int characterReplacement(string s, int k) {
        int low=0;
        int high=0;
        int res=INT_MIN;
        int maxe=INT_MIN;
        vector<int> v(26,0);
        v[s[high]-'A']++;
        while(high<s.size())
        {
            for(int i=0;i<v.size();i++)
            {
                maxe=max(maxe,v[i]);
            }
            while(high-low+1-maxe > k)
            {
                low++;
                v[s[low-1]-'A']--;
            }
            res=max(res,high-low+1);
            high++;
            if(high>=s.size())
            {
                break;
            }
            v[s[high]-'A']++;
        }
        return res;
    }
};