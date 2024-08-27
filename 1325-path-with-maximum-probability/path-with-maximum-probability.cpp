class Solution {
public:
    using v = pair<double, int>;
    vector<vector<v>> adj;
    const double INF=numeric_limits<double>::infinity();
    inline void create_adj(int n, vector<vector<int>>& edges, vector<double>& succProb) {
        adj.resize(n);
        int eN = edges.size();
        for (int i = 0; i < eN; i++) {
            int v0 = edges[i][0], v1 = edges[i][1];
            double w=-log2(succProb[i]);
            adj[v0].emplace_back(w, v1);
            adj[v1].emplace_back(w, v0);
        }
    }

    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start, int end) {
        vector<double> dist(n, INF);
        create_adj(n, edges, succProb);
        priority_queue<v, vector<v>, greater<v>> pq;
       
        pq.emplace(0, start);
        dist[start] = 0;

        while (!pq.empty()) {
            auto [cur_dist, i] = pq.top();
            pq.pop();
        //    cout<< i<<","<<cur_prob<<endl;
            if (i == end) 
                return exp2(-cur_dist);

            for (auto [next_dist, j] : adj[i]) {
                double new_dist = cur_dist+next_dist;
                if (new_dist < dist[j]) {
                    dist[j] = new_dist;
                //    cout<< i<<","<<j<<","<<new_prob<<endl;
                    pq.emplace(new_dist, j);
                }
            }
        }
        return 0.0;
    }
};