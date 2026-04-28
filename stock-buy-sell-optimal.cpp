class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minprofit= INT_MAX;
        int n = prices.size();
        int maxprofit=0;
        for(int price : prices) {
            if(minprofit>price) {
                minprofit=price;
            }
            else {
                maxprofit=max(maxprofit, price-minprofit);
            }
        }
        return maxprofit;
    }
};
