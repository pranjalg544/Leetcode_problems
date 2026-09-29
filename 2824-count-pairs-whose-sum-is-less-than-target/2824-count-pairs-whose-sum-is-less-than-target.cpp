class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        vector<pair<int,int>>ans;
        for(int i=0; i<nums.size();i++){
            for(int j=i+1; j<nums.size();j++){
                if(nums[i]+nums[j]<target){
                    ans.push_back({i,j});
                }
            }
        }
        int countPairs = ans.size();
        return countPairs;
    }
};