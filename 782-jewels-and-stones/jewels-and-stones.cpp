class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int n = 0;
    for (int i = 0; i < stones.size(); ++i) {
    char c = stones[i];
        if (jewels.find(c) != -1) {
            n++;
        }
    }
    return n;
        }
    };
