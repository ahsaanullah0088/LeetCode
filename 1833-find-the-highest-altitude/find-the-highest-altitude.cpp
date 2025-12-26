class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int curalt =0;
        int maxalt=0;
        for(int i =0; i<gain.size(); i++){
            curalt +=gain[i];
            if(curalt>maxalt){
                maxalt = curalt;
            }
        }
        return maxalt;
    }
};