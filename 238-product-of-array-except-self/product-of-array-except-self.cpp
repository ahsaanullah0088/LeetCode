class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
       int n = nums.size();
        vector<int> left(n, 1);  // Initialize with size n, all values set to 1
        vector<int> right(n, 1); // Initialize with size n, all values set to 1
        vector<int> ans(n, 0);   // Initialize with size n

        // Fill the left array
        for (int i = 1; i < n; i++) {
            left[i] = left[i - 1] * nums[i - 1];
        }

        // Fill the right array
        right[n - 1] = 1;
        for (int i = n - 2; i >= 0; i--) {
            right[i] = right[i + 1] * nums[i + 1];
        }

        // Calculate the answer
        for (int i = 0; i < n; i++) {
            ans[i] = left[i] * right[i];
        }

        return ans;
    }
};