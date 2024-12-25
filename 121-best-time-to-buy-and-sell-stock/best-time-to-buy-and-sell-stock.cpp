class Solution {
public:
    int maxProfit(vector<int>& prices) {
    int maxPro = 0;
    int n = prices.size();
    int mini = prices[0];

    for(int i=1; i<n;i++){
        int cost = prices[i] - mini;
        maxPro = max(maxPro,cost);
        mini= min(mini,prices[i]);
    }
    if(maxPro>0){
        return maxPro;
    }
    return 0;
    }
};