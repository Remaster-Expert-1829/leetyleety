class Solution {
public:
    bool eq(vector<int> &vs, vector<int> &vt)
    {
        for(int i=0;i<vs.size();i++)
        {
            if(vs[i]<vt[i]) return false;
        }
        return true;
    }
    string minWindow(string s, string t) {
        vector<int> vs(128,0);
        vector<int> vt(128,0);
        for(int i=0;i<t.size();i++)
        {
            vt[t[i]]++;
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
            while(eq(vs,vt))
            {
                if(high-low+1<min)
                {
                    start=low;
                    min=high-low+1;
                }
                low++;
                vs[s[low-1]]--;
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