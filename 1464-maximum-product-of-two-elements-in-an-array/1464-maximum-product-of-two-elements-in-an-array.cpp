class Solution {
public:
    int maxProduct(vector<int>& nums) {
        vector<int>temp;
        int product;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                product = (nums[i]-1)*(nums[j]-1);
                temp.push_back(product);
            }
        }
        int maxi = *max_element(temp.begin(),temp.end());
        return maxi;
    }
};