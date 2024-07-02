class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> sortedHeights = heights; // Fix typo in variable name
        sort(sortedHeights.begin(), sortedHeights.end()); // Fix typo in variable name

        int count = 0;
        for (size_t i = 0; i < heights.size(); ++i) {
            if (heights[i] != sortedHeights[i]) {
                ++count;
            }
        }
        return count;
    }
};
