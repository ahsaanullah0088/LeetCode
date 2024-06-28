class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int max1 = nums[n - 1];
        int max2 = nums[n - 2];
        return (max1 - 1) * (max2 - 1);
    }
};
