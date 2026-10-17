class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        int min = *min_element(nums.begin(),nums.end());
        int max = *max_element(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(nums[i]<max && nums[i]>min){
                return nums[i];
            }
        }
         return -1;
    }
};