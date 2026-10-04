class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int remaining=money;
        int count=0;
        sort(prices.begin(), prices.end());
        for(int i=0;i<prices.size();i++){
            if(count < 2) {
                remaining -= prices[i];
                count++;
            }
        }
        if(remaining >= 0)
            return remaining;
        return money;
    }
};