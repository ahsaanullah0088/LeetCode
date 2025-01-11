class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char> jewelSet;
        for (char jewel : jewels) {
            jewelSet.insert(jewel);
        }

        // Find total score/value
        int score = 0;
        for (int i = 0; i < stones.size(); i++) {
            if (jewelSet.find(stones[i]) != jewelSet.end()) {
                score++;
            }
        }

        return score;
    }
};
