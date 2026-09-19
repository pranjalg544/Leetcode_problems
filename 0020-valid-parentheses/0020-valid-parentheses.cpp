class Solution {
public:
    bool isValid(string s) {
        vector<char> temp;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('|| s[i]=='{' || s[i]=='['){
                temp.push_back(s[i]);
            }
            else{
            if(temp.empty()){
    return false;
            }

            if((s[i] == ')' && temp.back() == '(') ||
                   (s[i] == '}' && temp.back() == '{') ||
                   (s[i] == ']' && temp.back() == '[')){
                temp.pop_back();
            }
            else {
                    return false;
                }
        }
        }
        if(temp.size()==0) return true;
        else return false;
    }
};