class Solution {
public:
    int maxProfit(int k, vector<int>& prices) {
        int n = prices.size();
        vector<vector<int>>cur(2, vector<int>(k+1,0));
        vector<vector<int>>prev(2, vector<int>(k+1,0));
        
        for(int i=n-1;i>=0;i--){
            for(int buy=0;buy<=1;buy++){
                for(int cap=1;cap<=k;cap++){
                     if(buy) {
                          cur[buy][cap] = max((-prices[i]+prev[0][cap]), (0+ prev[1][cap]));
                    } else{
                          cur[buy][cap] = max((prices[i]+prev[1][cap-1]), (0, prev[0][cap]));
                    }
                }
            }
            prev=cur;
        }
        return prev[1][k];
    }
};
      


      