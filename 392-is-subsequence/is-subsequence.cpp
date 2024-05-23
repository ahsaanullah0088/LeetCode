class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0;  // Pointer for string s
        int j = 0;  // Pointer for string t

        // Traverse both strings
        while (i < s.size() && j < t.size()) {
            if (t[j] == s[i]) {
                i++;  // Move to the next character in s
            }
            j++;  // Move to the next character in t regardless of match
        }

        // If we've matched all characters in s, return true
        return i == s.size();
    }
};
