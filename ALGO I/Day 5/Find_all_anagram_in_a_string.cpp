class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
          if(k<2) return 0;
    int m=1;
    int i=0, j=0, n= nums.size();
    int ans=0;
    while(i<n)
    {
     
        while(i<n and m<k)
        {
           m*=nums[i];
            
          i++;
        }
      
         while(j<i and m>=k ) {
             ans+=i-j-1; m/=nums[j++];
         }
   
    }
     while(j<n) {
             ans+=n-j; m/=nums[j++];
         }
    return ans;
    
}
};