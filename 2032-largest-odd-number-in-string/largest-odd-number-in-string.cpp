#include <string>
using namespace std;

class Solution {
public:
    string largestOddNumber(string num) {
        // Iterate from the end of the string to the beginning
        for (int i = num.size() - 1; i >= 0; i--) {
            // Check if the current character is an odd digit
            if ((num[i] - '0') % 2 != 0) {
                // Return the substring from the start to the current position + 1
                return num.substr(0, i + 1);
            }
        }
        // If no odd number is found, return an empty string
        return "";
    }
};