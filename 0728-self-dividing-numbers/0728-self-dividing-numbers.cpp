class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>ans;
        int x;
        for(int i=left ; i<=right ; i++){
            int n = i;
            bool flag = true;

            while (n > 0) {
                x = n % 10;

                if (x == 0 || i % x != 0) {
                    flag = false;
                    break;
                }

                n = n / 10;
            }

            if (flag) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};