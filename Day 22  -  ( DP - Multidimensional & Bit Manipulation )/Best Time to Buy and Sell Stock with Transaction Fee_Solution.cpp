class Solution {
public:
    int maxProfit(int* prices, int pricesSize, int fee) {
        int hold = -prices[0];
        int cash = 0;
        for(int i = 1; i < pricesSize; i++) {
            int prevCash = cash;
            cash = (cash > hold + prices[i] - fee) ? cash : hold + prices[i] - fee;
            hold = (hold > prevCash - prices[i]) ? hold : prevCash - prices[i];
        }
        return cash;
    }
};
