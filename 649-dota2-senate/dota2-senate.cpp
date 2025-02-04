class Solution {
public:
    string predictPartyVictory(string senate) {
        queue<int> R, D;
        int n = senate.size();

        // Store the indices of 'R' and 'D' senators in separate queues
        for (int i = 0; i < n; i++) {
            if (senate[i] == 'R')
                R.push(i);
            else
                D.push(i);
        }

        // Simulate the banning process
        while (!R.empty() && !D.empty()) {
            int rTurn = R.front(), dTurn = D.front();
            R.pop(), D.pop();

            // The one who comes first bans the other and gets back in queue
            if (rTurn < dTurn)
                R.push(rTurn + n); // Radiant senator gets another turn
            else
                D.push(dTurn + n); // Dire senator gets another turn
        }

        return R.empty() ? "Dire" : "Radiant";
    }
};
