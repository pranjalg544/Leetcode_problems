class Solution {
public:
    bool hasAlternatingBits(int n) {
        int x = n;
        vector<int>rem;
        while(x>0){
            int remainder = x % 2;
            rem.push_back(remainder);
            x = x/2;
        }
        for(int i=1;i<rem.size();i++){
            if(rem[i]==rem[i-1]){
                return false;
            }
        }
        return true;
    }
};