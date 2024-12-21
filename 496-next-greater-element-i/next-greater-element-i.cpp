class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res(nums1.size()); // Result vector
        for (int i = 0; i < nums1.size(); i++) {
            bool found = false; // Reset found for each nums1 element
            res[i] = -1;        // Default value if no greater element is found
            for (int j = 0; j < nums2.size(); j++) {
                if (nums1[i] == nums2[j]) {
                    found = true; // Start searching for the next greater element
                }
                if (found && nums2[j] > nums1[i]) {
                    res[i] = nums2[j]; // Update result with the next greater element
                    break; // Exit the loop once the next greater element is found
                }
            }
        }
        return res;
    }
};
