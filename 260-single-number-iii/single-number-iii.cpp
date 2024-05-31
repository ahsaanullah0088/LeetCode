class Solution {
public:
    std::vector<int> singleNumber(std::vector<int>& nums) {
        std::unordered_map<int, int> frequency;
        for (int num : nums) {
            frequency[num]++;
        }
        
        std::vector<int> result;
        for (const auto& pair : frequency) {
            if (pair.second == 1) {
                result.push_back(pair.first);
            }
        }
        
        return result;
    }
};