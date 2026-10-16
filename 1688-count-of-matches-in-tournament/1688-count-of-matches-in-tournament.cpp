class Solution {
public:
    int numberOfMatches(int n) {
        int matches=0;
        if(n%2==0){
            while(n!=1){
            matches+=(n/2);
            n=n-(n/2);
            }
        }
        else{
           while(n!=1){
            matches+=(n/2);
            n=n-(n/2);
            }  
        }
        return matches;
    }
};