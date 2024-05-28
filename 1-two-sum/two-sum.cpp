#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> target_indices;
        unordered_map<int, int> hash_table;
        for(int i = 0; i < nums.size(); i++) {
            int second_integer = target - nums[i];
            if(hash_table.find(second_integer) != hash_table.end()) {
                target_indices.push_back(hash_table[second_integer]);
                target_indices.push_back(i);
                break;
            } else {
                hash_table[nums[i]] = i;
            }
        }
        return target_indices;
    }
};
