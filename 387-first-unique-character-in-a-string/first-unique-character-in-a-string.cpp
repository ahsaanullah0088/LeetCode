#include <iostream>
#include <queue>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> freq; // Frequency map
        queue<int> q; // Queue to store character indices

        // Count frequencies and store indices in queue
        for (int i = 0; i < s.size(); i++) {
            freq[s[i]]++;
            q.push(i);
        }

        // Find the first unique character
        while (!q.empty()) {
            int index = q.front();
            if (freq[s[index]] == 1) {
                return index; // Found the first unique character
            }
            q.pop(); // Remove non-unique characters
        }

        return -1; // No unique character found
    }
};