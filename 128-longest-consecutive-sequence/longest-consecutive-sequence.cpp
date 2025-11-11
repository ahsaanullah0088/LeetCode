class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        unordered_set<int> numSet(nums.begin() , nums.end());
        int longest =0;
        for(int num : numSet){
            if(numSet.find(num-1) == numSet.end()){
                int currentnum = num;
                int curstreak = 1;
                while(numSet.find(currentnum +1) != numSet.end()){
                    currentnum += 1;
                    curstreak += 1;
                }
                longest = max(longest, curstreak);
            }
        }
        return longest;
    }
};