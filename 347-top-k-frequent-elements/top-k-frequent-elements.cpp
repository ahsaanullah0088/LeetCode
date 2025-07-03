class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> count;
        for(int num:nums){
            count[num]++;
        }
        vector<pair<int , int>> freq;
        for(const auto& p:count){
            freq.push_back({p.second, p.first});
        }
        sort(freq.rbegin(), freq.rend());
        vector<int> res;
        for(int i=0; i<k; i++){
            res.push_back(freq[i].second);
        }
        return res;
    }
};