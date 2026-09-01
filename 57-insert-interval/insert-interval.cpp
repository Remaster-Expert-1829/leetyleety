class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> res;
        vector<vector<int>> fin;
        bool insert=false;
        for(int i=0;i<intervals.size();i++)
        {
            if(!insert && newInterval[0]<intervals[i][0])
            {
                insert=true;
                vector<int> temp;
                temp.push_back(newInterval[0]);
                temp.push_back(newInterval[1]);
                fin.push_back(temp);
            }
            vector<int> temp;
            temp.push_back(intervals[i][0]);
            temp.push_back(intervals[i][1]);
            fin.push_back(temp);
        }
        if(!insert)
        {
            vector<int> temp;
            temp.push_back(newInterval[0]);
            temp.push_back(newInterval[1]);
            fin.push_back(temp);
        }
        int start=fin[0][0];
        int end=fin[0][1];
        for(int i=1;i<fin.size();i++)
        {
            if(end<fin[i][0])
            {
                vector<int> temp;
                temp.push_back(start);
                temp.push_back(end);
                start=fin[i][0];
                end=fin[i][1];
                res.push_back(temp);
                continue;
            }
            end=max(end,fin[i][1]);
        }
        vector<int> temp;
        temp.push_back(start);
        temp.push_back(end);
        res.push_back(temp);
        return res;
    }
};