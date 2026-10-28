class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n = nums.size()/2;
        int count=1;
        sort(nums.begin(),nums.end());
        for(int i=1; i<nums.size();i++){
            if(nums[i]==nums[i-1]){
                count++;
                if(count==n) return nums[i];
            }
            
            else count = 1;
            }
        return -1;
    }
};