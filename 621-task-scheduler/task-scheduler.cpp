class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        unordered_map<char, int> frequencies;

        // Store the frequency of each task
        for (char task : tasks) {
            frequencies[task]++;
        }

        // Extract and sort the frequencies
        vector<int> sortedFrequencies;
        for (auto& pair : frequencies) {
            sortedFrequencies.push_back(pair.second);
        }
        sort(sortedFrequencies.begin(), sortedFrequencies.end());

        // Store the max frequency
        int maxFreq = sortedFrequencies.back();
        sortedFrequencies.pop_back();

        // Compute the maximum possible idle time
        int idleTime = (maxFreq - 1) * n;

        // Iterate over the frequencies and update the idle time
        while (!sortedFrequencies.empty() && idleTime > 0) {
            idleTime -= min(maxFreq - 1, sortedFrequencies.back());
            sortedFrequencies.pop_back();
        }

        idleTime = max(0, idleTime);

        // Return the total time, which is the sum of the busy time and idle 
        // time
        return tasks.size() + idleTime;
    }
};