class Solution {
public:
    int addDigits(int num) {
        if(num==0){
            return 0;
        }
        while(num>9){
            int y=num%10;
            int x = num/10;
            num = x+y;
        } 
        return num;
    }
};