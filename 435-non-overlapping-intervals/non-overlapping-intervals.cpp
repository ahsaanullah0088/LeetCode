class Solution {
public:
    static bool comparator(vector<int> a , vector<int> b){
        return a[1]<b[1];
    }
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), comparator);
        int count = 1;
        int freetime =intervals[0][1];
        
        for(int i =1 ; i < intervals.size(); i++){
            if(intervals[i][0]>=freetime){
                count++;
                freetime = intervals[i][1];
            }
        }
        return intervals.size()-count;
    }

};
auto init = []() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 0;
}();