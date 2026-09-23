class Solution {
public:
    int maxDifference(string s) {
        unordered_map<char,int> freq;

        for(char c : s){
            freq[c]++;
        }
        int a1 = INT_MIN;
        int a2 = INT_MAX;
        for(auto it: freq){
            if(it.second%2!=0){
                if(it.second>a1){
                    a1 = it.second;
                }
            }
            else{
                if(it.second<a2){
                    a2 = it.second;
                }
            }
        }
        return a1-a2;
    }
};