class Solution {
public:
    string minWindow(string s, string t) {
        vector<int> vs(128,0);
        vector<int> vt(128,0);
        int formed=0;
        int required=0;
        for(int i=0;i<t.size();i++)
        {
            vt[t[i]]++;
        }
        for(int i=0;i<vt.size();i++)
        {
            if(vt[i])
            {
                required++;
            }
        }
        string res="";
        int start=-1;
        if(s.empty() || t.empty() || s.size()<t.size())
        {
            return res;
        }
        int min=INT_MAX;
        int low=0;
        int high=0;
        while(high<s.size())
        {
            vs[s[high]]++;
            if(vt[s[high]] && vs[s[high]]==vt[s[high]]) formed++;
            while(required==formed)
            {
                if(high-low+1<min)
                {
                    start=low;
                    min=high-low+1;
                }
                low++;
                vs[s[low-1]]--;
                if(vt[s[low-1]] && vs[s[low-1]]<vt[s[low-1]]) formed--;
            }
            high++;
        }
        if(min!=INT_MAX)
        {
            res=s.substr(start,min); //only copying once since string can be very large and making regular copies can exceed memory
        }
        return res;
    }
};