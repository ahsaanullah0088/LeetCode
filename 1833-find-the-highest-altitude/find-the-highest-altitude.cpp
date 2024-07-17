class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int ans=0; 
        int hi =0;
        for(int i=0; i<gain.size(); i++){
         ans += gain[i];
         hi=max(hi, ans);
        }
        return hi;
    }
};