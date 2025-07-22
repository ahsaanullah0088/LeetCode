class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int highest =0; 
        int curr; 

        for(int num : gain){
            curr += num;
            if(curr> highest){
                highest = curr;
            }

        }
        return highest;
    }
};