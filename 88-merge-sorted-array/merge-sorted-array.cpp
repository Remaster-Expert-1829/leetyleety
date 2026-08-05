class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int place=m+n-1;
        int i=m-1;
        int j=n-1;
        while(i!=-1 && j!=-1)
        {
            if(nums1[i]>=nums2[j])
            {
                nums1[place]=nums1[i];
                i--;
                place--;
            }
            else{
                nums1[place]=nums2[j];
                j--;
                place--;
            }
        }
        if(i==-1)
        {
            for(int p=j;p>=0;p--)
            {
                nums1[place]=nums2[p];
                place--;
            }
        }
        else if(j==-1)
        {
             for(int p=i;p>=0;p--)
            {
                nums1[place]=nums1[p];
                place--;
            }
        }
    }
};