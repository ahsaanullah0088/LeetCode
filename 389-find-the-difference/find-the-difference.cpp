class Solution {
public:
    char findTheDifference(string s, string t) {
        int sumS = 0, sumT = 0;

        // Calculate the sum of ASCII values of characters in s
        for (char c : s) {
            sumS += c;
        }

        // Calculate the sum of ASCII values of characters in t
        for (char c : t) {
            sumT += c;
        }

        // The difference is the ASCII value of the extra character
        return static_cast<char>(sumT - sumS);
    }
};