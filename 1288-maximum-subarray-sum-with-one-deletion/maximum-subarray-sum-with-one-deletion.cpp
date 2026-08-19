class Solution {
public:
    int maximumSum(vector<int>& arr) {
        int nodel=arr[0];
        int del=0;
        int res=INT_MIN;
        if(arr.size()==1)
        {
            return arr[0];
        }
        for(int i=1;i<arr.size();i++)
        {
            //dont delete
            int a=arr[i];
            int b=nodel+arr[i];
             //delete one
            int c=del+arr[i];
            int d=nodel;
            nodel=max(a,b);
            del=max(c,d);
            res=max(res,max(nodel,del));
        }
        return res;
    }
};