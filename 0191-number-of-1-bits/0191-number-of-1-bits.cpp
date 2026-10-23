class Solution {
public:
    int hammingWeight(int n) {
        int count=0;
        int x=n;
        while(x>0){
            int rem;
            rem = x%2;
            x=x/2;
            if(rem == 1){
                count++;
            }
        }
        return count;
    }
};


// 11 / 2 == 5 (remainder 1)
// 5 / 2 == 2 (remainder 1)
// 2 / 2 == 1 (remainder 0)