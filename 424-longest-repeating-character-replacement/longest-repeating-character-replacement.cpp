class Solution {
public:
    int maxele(vector<int> &v)
    {
        int maxe=INT_MIN;
        for(int i=0;i<v.size();i++)
        {
            maxe=max(maxe,v[i]);
        }
        return maxe;
    }
    int characterReplacement(string s, int k) {
        int low=0;
        int high=0;
        int res=INT_MIN;
        vector<int> v(26,0);
        v[s[high]-'A']++;
        while(high<s.size())
        {
            while(high-low+1-maxele(v) > k)
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