class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans;
        for(int i=0;i<n+1;i++){
            int x=i;
            int count=0;
            if(i==0 || i==1){
             ans.push_back(i);
            }
            else{
                while(x>0){
                    
                    // pussh
                   int rem = x%2;
                    if( rem == 1) {
                        count++;
                        
                    }
                    x = x/2;
                }
                ans.push_back(count);
            }
        }
        return ans;
    }
};

// x = i%2