#include <string>
#include <algorithm>

class Solution {
public:
    std::string reverseVowels(std::string s) {
        int n = s.length();
        int f = 0;
        int e = n - 1;
        while (f < e) {
            while (f < e && !isVowel(s[f])) {
                f++;
            }
            while (f < e && !isVowel(s[e])) {
                e--;
            }
            std::swap(s[f], s[e]);
            f++;
            e--;
        }
        return s;
    }

private:
    bool isVowel(char c) {
        c = std::tolower(c);
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }
};
