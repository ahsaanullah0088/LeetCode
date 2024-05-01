#include <vector>
using namespace std;

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int count[102] = {0}; // Initialize the count array with zeros
        
        // Count occurrences of each number
        for (int num : nums) {
            count[num]++;
        }
        
        int totalCount = 0;
        
        // Calculate total count of identical pairs
        for (int i : count) {
            totalCount += (i * (i - 1)) / 2;
        }
        
        return totalCount;
    }
};
