class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        if(n==1)
            return 0;
        int i=0,j=n-1;
        while(i<j)
        {
            int mid = (i+j)/2;
            if(nums[mid]>nums[mid+1])
                j = mid;
            if(nums[mid]<nums[mid+1])
                i = mid+1;
        }
        return i;
    }
};