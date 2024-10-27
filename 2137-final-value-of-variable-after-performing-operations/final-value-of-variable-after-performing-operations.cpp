class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int a=0;

        for(auto arr:operations){
            if(arr=="--X"||arr=="X--"){
                --a;
            }
            else{
                ++a;
            }
        }
        return a;
    }
};