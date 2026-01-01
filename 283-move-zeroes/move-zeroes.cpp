class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> output;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                output.push_back(nums[i]);
            }
        }

        int zeros = nums.size() - output.size();

        while (zeros--) {
            output.push_back(0);
        }
        nums = output;
    }
};
