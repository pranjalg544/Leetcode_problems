class Solution {
public:
    int minMoves(vector<int>& nums) {
     int maximum = *max_element(nums.begin(),nums.end());
     int count_moves = 0;
     for(int i=0;i<nums.size();i++){
        while(nums[i]!=maximum){
            nums[i]++;
            count_moves++;
        }
     }
     return count_moves;
    }
};