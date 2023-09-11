class Solution {
public:
    int maxProfit(vector<int>& p) {
        int max_profit = 0;
        int current_profit = 0;

        for (int i = 1; i < p.size(); i++) {
            current_profit = max(0, current_profit + p[i] - p[i - 1]);
            max_profit = max(max_profit, current_profit);
        }

        return max_profit;
    }
};
