class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        for(int i=0;i<nums.size(); i++){
            int sum=nums[i];
            if(i>0 && nums[i]==nums[i-1])
                continue;
            
            int a=i+1,j=nums.size()-1;
            while(a<j){
                if(sum+nums[a]+nums[j]>0)
                    j--;
                
            else if(sum+nums[a]+nums[j]<0)
                a++; 
        else{
            ans.push_back({nums[i], nums[a],nums[j]});
            j--;
            while(nums[j]==nums[j+1] && j>1)
                j--;
        }
            }
        }
        return ans;
    }
        
    
};
        




       