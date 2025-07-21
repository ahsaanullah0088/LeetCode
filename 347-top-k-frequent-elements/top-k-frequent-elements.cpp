class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // I have declared a map here to put the value and increase the count
        unordered_map<int, int> cnt;
        for (int num : nums) {
            cnt[num]++;
        }

        // A new vector arr is declared 
        vector<pair<int, int>> arr;
        for (const auto& p : cnt) {
            arr.push_back({p.second, p.first});
        }

        // Sort the vector in descending order of frequency
        sort(arr.rbegin(), arr.rend());

        // The result vector to store and return the answer
        vector<int> res;
        for (int i = 0; i < k; i++) {
            res.push_back(arr[i].second);
        }

        return res;
    }
};