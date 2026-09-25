class Solution {
public:
    string frequencySort(string s) {
        vector<char>temp;
       unordered_map<char,int>freq;
       for(int i=0;i<s.size();i++){
        freq[s[i]]++;
       }
       for(auto x: freq){
            temp.push_back(x.first);
        }
       //ise yaad krle pranjal
       sort(temp.begin(), temp.end(), [&](char a, char b) {
            return freq[a] > freq[b];
        });

        string ans;
        for(char c : temp){
            for(int i =0; i<freq[c]; i++){
                ans+=c;
            }
        }

        return ans;
    }
};