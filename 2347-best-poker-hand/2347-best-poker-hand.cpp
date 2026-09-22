class Solution {
public:
    string bestHand(vector<int>& ranks, vector<char>& suits) {
        // first---FLush
        int count_flush=0;
        for(int i=0;i<suits.size();i++){
                if(suits[i]==suits[0]){
                    count_flush++;
                }
        }
        if(count_flush==5) return "Flush";

        // Three of a kind
        int count_kind=0;
        for(int i=0;i<ranks.size();i++){
            int count=0;
            for(int j=0; j<ranks.size();j++){
                if(ranks[i]==ranks[j]){
                    count++;
                }
            }
            if(count>count_kind){
                count_kind = count;
            }
        }
        if(count_kind>=3) return "Three of a Kind";

        //Pair 
        if(count_kind == 2) return "Pair";

        //high card
        return "High Card";

    }
};