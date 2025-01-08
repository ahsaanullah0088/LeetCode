class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> hashedset;
        for(int i=0; i<nums.size();i++){
            if(hashedset.find(nums[i])!=hashedset.end()){
                return true;
            }else{
                hashedset.insert(nums[i]);
            }
        }
        return false;
    }
};