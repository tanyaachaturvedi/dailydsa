class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int total=0;

        for(int i=0;i<n-1;i++){
            int profit=0;
            if(prices[i+1]>prices[i]){
                profit=prices[i+1]-prices[i];
            }
            total += profit;
        }
        return total;
    }
};