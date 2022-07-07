class Solution {
public:
    vector<int> twoSum(vector<int>& num, int target) {
        int s=0;
        int e=num.size()-1;
        int sum=0;
        
        while(s<e){
            sum=num[s]+num[e];
            if(sum<target){
                ++s;
            } else if(sum>target){
                --e;
            } else{
                break;
            }
        }
        return {s+1, e+1};
    }
};