class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // int profit;
        // vector<int> temp;
        // vector<int> ans;
        int n = prices.size();

        // if(n < 2)
        //     return 0;

        // for(int i = 0; i < n; i++) {
        //     for(int j = i + 1; j < n; j++) {
        //         profit = prices[j] - prices[i];
        //         temp.push_back(profit);
        //     }

        //     int maximum = *max_element(temp.begin(), temp.end());
        //     ans.push_back(maximum);
        // }

        // int max_profit = *max_element(ans.begin(), ans.end());

        // if(max_profit < 0)
        //     return 0;
        // else
        //     return max_profit;

        int min_price=prices[0];
        int max_profit = 0;
        for(int i=1;i<n;i++){
            int profit = prices[i] - min_price;

            max_profit = max(max_profit, profit);
            min_price = min(min_price, prices[i]);
        }
        return max_profit;
    }
};