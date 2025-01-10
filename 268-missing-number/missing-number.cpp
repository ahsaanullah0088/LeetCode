class Solution {
public:
    int missingNumber(vector<int>& nums) {
        unordered_map<int, bool> numsmap;
        for(int num : nums){
            numsmap[num] = true;
        }

        for(int i=0; i<=nums.size(); ++i){
            if(numsmap.find(i)==numsmap.end()){
                return i;
            }
        }
        return -1;
    }
};