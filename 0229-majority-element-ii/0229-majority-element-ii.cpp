class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>temp;
        unordered_map<int,int>freq;
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }
        for(auto x : freq){
            if(x.second > nums.size()/3){
                temp.push_back(x.first);
            }
        }
        return temp;
    }
};