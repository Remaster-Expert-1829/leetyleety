class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
        int count=1;
        int unique=1;
        int point=1;
        int k=1;
        while(point<arr.size())
        {
            if(arr[point]!=arr[point-1])
            {
                arr[unique]=arr[point];
                k++;
                count=1;
                unique++;
            }
            else
            {
                if(count==1)
                {
                    arr[unique]=arr[point];
                    count++;
                    unique++;
                    k++;
                }
            }
            point++;
        }
        return k;
    }
};