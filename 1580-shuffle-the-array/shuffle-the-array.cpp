class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans(2 * n, -1); // Initialize ans with 2*n elements, all set to -1
int i = 0;
int j = n;
while (i < n and j < 2 * n) {
    ans[i * 2] = nums[i]; // Assign value to ans at index i*2
    ans[i * 2 + 1] = nums[j]; // Assign value to ans at index i*2 + 1
    i++, j++;
}
return ans;

    }
};