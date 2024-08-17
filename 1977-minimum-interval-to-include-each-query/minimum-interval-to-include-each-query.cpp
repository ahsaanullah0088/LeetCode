class Solution {
public:
    vector<int> minInterval(vector<vector<int>>& intervals, vector<int>& queries) {
        int n=intervals.size();
        vector<int> sorted_queries = queries;
        sort(sorted_queries.begin(), sorted_queries.end());
        sort(intervals.begin(), intervals.end());

        // pq: {size of interval, end of interval}
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        // mp: {query, size of interval}
        unordered_map<int, int> mp;

        // We are traversing 'intervals' only once
        int i=0, left, right;
        for(int j=0; j<sorted_queries.size(); j++){
            int q=sorted_queries[j];

            // Adding all the intervals with 'start' >= 'q' in the 'pq'
            //   sorted based on the size of the interval
            while(i<n && q>=intervals[i][0]){
                left=intervals[i][0];
                right=intervals[i][1];
                pq.push({right-left+1, right});
                i++;
            }

            // Remove all the intervals from 'pq' that don't contain 'q'
            //   This works because the 'queries' are sorted and if the interval doesn't contain 'q'
            //   then it won't contain q+1,q+2,....
            while(!pq.empty() && pq.top().second<q) pq.pop();

            if(!pq.empty()) mp[q]=pq.top().first;
            else mp[q]=-1;
        }

        vector<int> ans;
        for(auto x: queries){
            ans.push_back(mp[x]);
        }

        return ans;
    }
};