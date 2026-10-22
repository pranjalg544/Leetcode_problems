class Solution {
public:
    int vowelStrings(vector<string>& words, int left, int right) {
        int count=0;
        for (int i = 0; i < words.size(); i++) {
    for (int j = 0; j < words[i].size(); j++) {
        words[i][j] = tolower(words[i][j]);
    }
}
        for(int i=left;i<=right;i++){
            if((words[i][0]== 'a' || words[i][0]== 'e' || words[i][0]== 'i' || words[i][0]== 'o' || words[i][0]== 'u' ) && (words[i][words[i].size()-1]== 'a' || words[i][words[i].size()-1]== 'e' || words[i][words[i].size()-1]== 'i' || words[i][words[i].size()-1]== 'o' || words[i][words[i].size()-1]== 'u' )){
                count++;
        }
        }
        return count;
    }
};