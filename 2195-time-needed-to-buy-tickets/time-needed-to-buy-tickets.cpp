class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int result  = 0 ; 
        for ( int i =0; i<tickets.size(); i++){
            if(i<=k){
                result +=min(tickets[i], tickets[k]);
            }else{
                result +=min(tickets[i] , tickets[k]-1);
            }
        }
        return result;
    }
};