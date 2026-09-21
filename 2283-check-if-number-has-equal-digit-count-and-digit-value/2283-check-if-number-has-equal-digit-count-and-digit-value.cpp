class Solution {
public:
    bool digitCount(string num) {
        vector<int>temp;
        for(int i=0; i<num.size();i++){
            int count=0;
            for(int j = 0; j < num.size(); j++) {
                if(i == num[j] - '0') {
                    count++;
                }
            }
            if(count==num[i] - '0'){
                temp.push_back(1);
            }
            else{
                temp.push_back(0);
            }
        }
        int res=0;
        for(int i=0;i<temp.size();i++){
           if(temp[i]==1) {
            res++;
           }
        }
        if(res==temp.size()) return 1;
        else return 0;
    }
};