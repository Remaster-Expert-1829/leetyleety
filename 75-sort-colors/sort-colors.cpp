class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low=0;
        int mid=0;
        int high=nums.size()-1;
        //assuming start->low-1 : filled with 0
        //assuming low->mid-1 : filled with 1
        //assuming high+1->end : filled with 2
        //unsorted region: mid->high
        while(mid<=high)
        {
            if(nums[mid]==0)
            {
                swap(nums[low],nums[mid]); //this returns 1
                low++;
                mid++;
            }
            else if(nums[mid]==1)
            {
                mid++;
            }
            else if(nums[mid]==2)
            {
                swap(nums[high],nums[mid]);
                high--;
            }
        }
    }
};