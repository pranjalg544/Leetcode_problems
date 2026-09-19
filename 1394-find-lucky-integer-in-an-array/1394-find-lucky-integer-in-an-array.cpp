class Solution {
public:
    int findLucky(vector<int>& arr) {
    unordered_map<int,int> freq;
    for(int i=0 ; i<arr.size();i++){
        freq[arr[i]]++;
    }
    int lucky_number = -1;
    for(int i=0;i<arr.size();i++){
        if(freq[arr[i]]==arr[i]){
            lucky_number = max(lucky_number,arr[i]);
        }
    }
    return lucky_number;
    }
};