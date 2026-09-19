class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int placed_fruits = 0;
        vector<int>used;
        for(int i=0;i<baskets.size();i++){
            used.push_back(0);
        }
        for(int i=0;i<fruits.size();i++){
            for(int j=0;j<baskets.size();j++){
                if(fruits[i]<=baskets[j] && used[j]==0){
                    placed_fruits++;
                    used[j]=1;
                    break;
                }
            }
        }
        return (fruits.size()-placed_fruits);
    }
};