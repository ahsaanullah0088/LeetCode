class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> a( nums.size() * 2);
        for(int i =0; i<nums.size(); i++){
            a[i] = nums[i];
            a[i+nums.size()] = nums[i];
        }
        return a;
    }
};