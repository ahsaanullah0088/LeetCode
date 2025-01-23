class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // Initialize variables
        int maxCurrent = nums[0]; // Maximum sum ending at the current position
        int maxGlobal = nums[0];  // Maximum sum found so far

        // Iterate through the array starting from the second element
        for (int i = 1; i < nums.size(); i++) {
            // Update maxCurrent
            maxCurrent = max(nums[i], maxCurrent + nums[i]);
            // Update maxGlobal if maxCurrent is greater
            maxGlobal = max(maxGlobal, maxCurrent);
        }

        return maxGlobal; // Return the maximum subarray sum
    }
};
