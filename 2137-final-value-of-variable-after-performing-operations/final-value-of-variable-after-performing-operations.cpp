class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int X = 0; 
        for(string num : operations){
            if(num == "--X" || num == "X--")  X--;
            else X++;
        }
        return X;
        
    }
};