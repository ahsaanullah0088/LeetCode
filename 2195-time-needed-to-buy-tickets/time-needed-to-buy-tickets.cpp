class Solution {
public:
    int timeRequiredToBuy(std::vector<int>& tickets, int k) {
        int res = 0;
        int n = tickets.size();
        
        for (int i = 0; i < n; i++) {
            if (i <= k) {
                res += std::min(tickets[i], tickets[k]);
            } else {
                res += std::min(tickets[i], tickets[k] - 1);
            }
        }
        
        return res;
    }
};
