class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int ans=0; 
        for(auto x : operations){
            if(x=="--X" || x=="X--"){
                ans--;
            }else{
                ans++;
            }
        }
        return ans;
    }
};