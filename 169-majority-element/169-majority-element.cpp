class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0, num;
        int element=0;
        
        for(int i=0;i<nums.size();i++){
            int num=nums[i];
            if(count==0){
                element=num;
            }
            if(num==element){
                count+=1;
            }else{
                count=count-1;
            }
        }
        return element;
    }
};