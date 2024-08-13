class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> sumFrequency;
        int cum_sum = 0;
        int count = 0;

        // Initialize the map with cum_sum 0 and its frequency 1
        sumFrequency[0] = 1;

        for (int i = 0; i < nums.size(); i++) {
            cum_sum += nums[i];
            
            // Check if there exists a cumulative sum that, when subtracted from the current, gives k
            if (sumFrequency.find(cum_sum - k) != sumFrequency.end()) {
                count += sumFrequency[cum_sum - k];
            }
            
            // Update the frequency of the current cumulative sum in the map
            sumFrequency[cum_sum]++;
        }

        return count;
    }
};
