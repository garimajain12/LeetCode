class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
      int ans=1, n=nums.size();
        vector<int>dp(n,1);
        
        for(int i=1;i<n;i++){
            for(int j=i;j>=0;j--){
                if(nums[i]>nums[j]) 
                    dp[i]=max(dp[i], dp[j]+1);
                ans=max(ans,dp[i]);
            }
        }
        return ans;
    }
};
    
    
    