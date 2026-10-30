class Solution {
public:
    int calPoints(vector<string>& operations) {
     vector<int>record;
     for(int i=0;i<operations.size();i++){
        if(operations[i] != "+" && operations[i] != "D" && operations[i] != "C"){
            record.push_back(stoi(operations[i]));
        }
        else if(operations[i]=="+"){
            record.push_back(record[record.size()-1]+record[record.size()-2]);
        }
        else if(operations[i]=="D"){
            record.push_back(2*record[record.size()-1]);
        }
        else if(operations[i]=="C"){
            record.pop_back();
        }
     }
     int sum=0;
     for(int i=0;i<record.size();i++){
        sum+=record[i];
     }
     return sum;
    }
};