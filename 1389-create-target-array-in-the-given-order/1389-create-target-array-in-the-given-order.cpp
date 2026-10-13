class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> target;

        for (int i = 0; i < nums.size(); i++) {
            target.push_back(nums[i]);
        }

        for (int i = 0; i < nums.size(); i++) {
            for (int j = i; j > index[i]; j--) {
                swap(target[j], target[j - 1]);
            }
        }

        return target;
    }
};