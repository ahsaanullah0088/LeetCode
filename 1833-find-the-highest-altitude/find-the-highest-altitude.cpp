class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int max =0;
        int curr =0;
        for(int i=0;i<gain.size(); i++){
             curr += gain[i] ;
             if(max < curr){
                max = curr;
             }
        }
        return max;
    }
};