class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans(2 * n, -1);
int i = 0;
int j = n;
while (i < n and j < 2 * n) {
    ans[i * 2] = nums[i]; 
    ans[i * 2 + 1] = nums[j]; 
    i++, j++;
}
return ans;

    }
};