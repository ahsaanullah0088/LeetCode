class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals,vector<int>& newInterval) {
        vector<pair<int,int>>v;
        for(vector<int> u:intervals) {
            v.push_back(make_pair(u[0],u[1]));
        }
        v.push_back(make_pair(newInterval[0],newInterval[1]));
        sort(v.begin(),v.end());
        int prev_start=-1,prev_end=-1;
        vector<vector<int>>result;
        for(pair<int,int> p:v) {
            if(p.first>prev_end) {
                result.push_back({p.first,p.second});
                prev_start=p.first;
                prev_end=p.second;
            }
            else {
                result.pop_back();
                result.push_back({prev_start,max(prev_end,p.second)});
                prev_end=max(prev_end,p.second);
            }
        }
        return result;
    }
};