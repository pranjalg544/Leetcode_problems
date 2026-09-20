class Solution {
public:
    int findNumbers(vector<int>& nums) {
        vector<int>temp;
        
        for(int i =0;i<nums.size();i++){
            int count=0;
            while(nums[i]>0){
                nums[i] = nums[i]/10;
                count++;    
            }
            temp.push_back(count);
        }
        int evenNumber=0;
        for(int i=0;i<temp.size();i++){
            if(temp[i]%2==0){
                evenNumber++;
            }
        }
        return evenNumber;
    }
};