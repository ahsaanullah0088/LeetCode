/*
Approach (Hashing-based):

We use a hash map to count the frequency of each number in the array. This is not the most optimal
approach in terms of space, but demonstrates usage of hashing for storing intermediate state.

⚙️ Steps:
1. Traverse the array and calculate the total product of all non-zero numbers.
2. Count how many zeros exist.
3. If more than one zero → result is all 0s.
4. If exactly one zero → only the zero-index gets the product, rest are 0.
5. If no zeros → result[i] = totalProduct / nums[i] (handle via map if needed).

\U0001f4e6 Time Complexity: O(n)  
\U0001f4e6 Space Complexity: O(n) (due to hash map)

⚠️ Note: Division is used here only when zeros are not present, as hash maps are being used to simulate tracking.
*/
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int totalProduct = 1;
        int zeroCount = 0;
        unordered_map<int, int> freqMap;

        for (int num : nums) {
            freqMap[num]++;
            if (num == 0) {
                zeroCount++;
                continue;
            }
            totalProduct *= num;
        }

        vector<int> result;
        for (int num : nums) {
            if (zeroCount > 1) {
                result.push_back(0);
            } else if (zeroCount == 1) {
                result.push_back(num == 0 ? totalProduct : 0);
            } else {
                result.push_back(totalProduct / num);
            }
        }

        return result;
    }
};