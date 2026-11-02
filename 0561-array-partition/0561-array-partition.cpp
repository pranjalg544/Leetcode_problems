class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int max_sum = 0;
        int pair_sum;

        sort(nums.begin(), nums.end());

        for(int i = 0; i < nums.size(); i += 2) {
            pair_sum = min(nums[i], nums[i+1]);
            max_sum += pair_sum;
        }

        return max_sum;
    }
};

// rember i+=2 -->part