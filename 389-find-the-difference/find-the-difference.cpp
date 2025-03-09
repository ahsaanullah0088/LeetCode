class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char, int> map;

        // Count frequency of each character in s
        for (char c : s) {
            map[c]++;
        }

        // Check characters in t
        for (char c : t) {
            if (map.find(c) == map.end() || map[c] == 0) {
                // Character not found or frequency exhausted
                return c;
            } else {
                // Decrement frequency
                map[c]--;
            }
        }

        // This line will never be reached as per the problem statement
        return '\0';
    }
};