class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        int i=1;
        vector<vector<int>> res;
        int start=intervals[0][0];
        int end=intervals[0][1];
        while(i<intervals.size())
        {
            if(end<intervals[i][0])
            {
                vector<int> temp;
                temp.push_back(start);
                temp.push_back(end);
                res.push_back(temp);
                start=intervals[i][0];
                end=intervals[i][1];
                continue;
            }
            end=max(end,intervals[i][1]);
            i++;
        }
        vector<int> temp;
        temp.push_back(start);
        temp.push_back(end);
        res.push_back(temp);
        return res;
    }
};