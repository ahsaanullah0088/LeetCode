class Solution {
public:
    int maxArea(vector<int>& height) {
    int left = 0;                // Start pointer
    int right = height.size() - 1; // End pointer
    int maxWater = 0;            // Store the maximum water

    while (left < right) {
        // Calculate the area
        int width = right - left;
        int minHeight = min(height[left], height[right]);
        int currentArea = width * minHeight;

        // Update the maximum water area
        maxWater = max(maxWater, currentArea);

        // Move the pointer corresponding to the smaller height
        if (height[left] < height[right]) {
            left++;
        } else {
            right--;
        }
    }

    return maxWater;
    }
};