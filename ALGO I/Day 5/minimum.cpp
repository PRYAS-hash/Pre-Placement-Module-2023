class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
int n=nums.size();
        int ans=INT_MAX,sum=0;
        for(int i=0,j=0;i<n;i++)
        {
            sum+=nums[i];
            while(sum>=target)
            {
                ans=min(ans,i-j+1);
                sum-=nums[j];
                j++;
            }
        }
        if(ans==INT_MAX)
            return 0;
        return ans;
    }
};