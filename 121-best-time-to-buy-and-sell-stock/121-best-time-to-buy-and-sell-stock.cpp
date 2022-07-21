class Solution {
public:
    int maxProfit(vector<int>& price) {
        int profit=0;
        int minPrice=INT_MAX;
        
        for(int i=0; i<price.size();i++){
            minPrice=min(price[i], minPrice);
                profit=max(profit, price[i]-minPrice);
        }    
        return profit;
    }
};