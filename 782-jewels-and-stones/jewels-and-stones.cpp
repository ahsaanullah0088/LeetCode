class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int n = 0;
    for (char c : stones) {
        if (jewels.find(c) != string::npos) {
            n++;
        }
    }
    return n;
        }
    };
