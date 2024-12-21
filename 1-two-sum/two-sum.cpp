class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res; // Initialize as empty
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) { // Start j from i+1 to avoid duplicates
                if (nums[i] + nums[j] == target) {
                    res.push_back(i);
                    res.push_back(j);
                    return res; // Return immediately after finding the pair
                }
            }
        }
        return res; // Return empty if no pair is found
    }
};
