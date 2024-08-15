class Solution {
public:
    static bool cmp(vector<int> &a,vector<int> &b){
        return b[1]>a[1];
    }
    int maxEvents(vector<vector<int>>& v) {
        int n=v.size();
        sort(v.begin(),v.end(),cmp);
        int cnt=0;
        set<int> day;
        for(int i=1;i<=v.back()[1];i++){
            day.insert(i);
        }
        for(int i=0;i<n;i++){
            auto it=day.lower_bound(v[i][0]);
            if(it==day.end() || *it>v[i][1]){
                continue;
            }else{
                cnt++;
                day.erase(it);
            }
        }
        return cnt;
    }
};