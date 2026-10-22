class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int>ans;
        int x;
        for(int i = 0; i < nums.size(); i++) {
            int n = nums[i];
            int div = 1;

            while(n / div >= 10)
                div *= 10;

            while(div > 0) {
                ans.push_back(n / div);
                n %= div;
                div /= 10;
            }
        }
        return ans;
    }
};