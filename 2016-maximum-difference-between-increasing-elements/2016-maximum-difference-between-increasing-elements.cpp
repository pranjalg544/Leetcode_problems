class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        vector<int> temp;
        int diff;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] < nums[j] && i < j) {
                    diff = nums[j] - nums[i];
                    temp.push_back(diff);
                } else {
                    temp.push_back(0);
                }
            }
        }
        int count = 0;
        for (int i = 0; i < temp.size(); i++) {
            if (temp[i] == 0) {
                count++;
            }
        }
        if (count == temp.size())
            return -1;
        int maxi = *max_element(temp.begin(), temp.end());
        return maxi;
    }
};