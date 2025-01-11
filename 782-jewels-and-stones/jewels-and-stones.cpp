class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
    unordered_set<char> jewelSet;
    for (char jewel : jewels) {
        jewelSet.insert(jewel);
    }

    // Find total score/value
    int score = 0;
    for (char stone : stones) {
        if (jewelSet.count(stone)) {
            score++;
        }
    }

    return score;
    }
};