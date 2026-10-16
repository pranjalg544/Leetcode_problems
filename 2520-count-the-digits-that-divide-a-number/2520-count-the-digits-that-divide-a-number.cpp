class Solution {
public:
    int countDigits(int num) {
        int count = 0;
        int n = 0;
        int temp=num;
        while (num > 0) {
            num = num / 10;
            n++;
        }
        num=temp;

        while (n != 0) {
            int val = temp % 10;

            if (val != 0 && num % val == 0) {
                count++;
            }

            temp = temp / 10;
            n--;
        }
        return count;
    }
};