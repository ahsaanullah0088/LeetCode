class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> numset;
        for(int i=0; i<nums.size();i++){
            if(numset.find(nums[i])!= numset.end()){
                return true;
            }
            numset.insert(nums[i]);
        }
        return false;
    }
};