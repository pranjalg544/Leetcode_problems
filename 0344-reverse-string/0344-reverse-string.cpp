class Solution {
public:
    void reverseString(vector<char>& s) {
        int n=s.size();
        
        for(int i=0;i<(n/2);i++){
            int str = s[i];
            int last = s[n-i-1];
            swap(s[i],s[n-i-1]);
        }
    }
};