class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        vector<pair<int,int>> temp;
        for(int i=0;i<nums.size();i++){
            for(int j=i;j<nums.size();j++){
                if(nums[i]==nums[j] && i<j){
                    temp.push_back({i, j});
                }
            }
        }
        return temp.size();
    }
};