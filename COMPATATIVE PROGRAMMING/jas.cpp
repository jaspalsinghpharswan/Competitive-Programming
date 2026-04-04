#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;
struct Edge {
    int to, rev, cap, cost;
};

class MinCostFlow {
public:
    int N;
    vector<vector<Edge>> G;
    vector<int> h, dist, prevv, preve;

    MinCostFlow(int n) : N(n), G(n), h(n), dist(n), prevv(n), preve(n) {}

    void addEdge(int from, int to, int cap, int cost) {
        G[from].push_back({to, (int)G[to].size(), cap, cost});
        G[to].push_back({from, (int)G[from].size() - 1, 0, -cost});
    }

    int flow(int s, int t, int f) {
        int res = 0;
        fill(h.begin(), h.end(), 0);
        while (f > 0) {
            priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;
            fill(dist.begin(), dist.end(), INF);
            dist[s] = 0;
            pq.emplace(0, s);
            while (!pq.empty()) {
                auto [d, v] = pq.top(); pq.pop();
                if (dist[v] < d) continue;
                for (int i = 0; i < G[v].size(); ++i) {
                    Edge &e = G[v][i];
                    if (e.cap > 0 && dist[e.to] > dist[v] + e.cost + h[v] - h[e.to]) {
                        dist[e.to] = dist[v] + e.cost + h[v] - h[e.to];
                        prevv[e.to] = v;
                        preve[e.to] = i;
                        pq.emplace(dist[e.to], e.to);
                    }
                }
            }
            if (dist[t] == INF) return -1;
            for (int v = 0; v < N; ++v) h[v] += dist[v];
            int d = f;
            for (int v = t; v != s; v = prevv[v]) {
                d = min(d, G[prevv[v]][preve[v]].cap);
            }
            f -= d;
            res += d * h[t];
            for (int v = t; v != s; v = prevv[v]) {
                Edge &e = G[prevv[v]][preve[v]];
                e.cap -= d;
                G[v][e.rev].cap += d;
            }
        }
        return res;
    }
};

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> A(N);
    for (int &a : A) cin >> a;

    vector<pair<int, int>> edges(M);
    for (auto &[u, v] : edges) {
        cin >> u >> v;
        --u; --v;
    }

    // Step 1: Check parity condition
    int oddCount = 0;
    for (int a : A) if (a % 2) ++oddCount;
    if (oddCount % 2 != 0) {
        cout << -1 << endl;
        return 0;
    }

    // Step 2: Construct flow network
    // Each edge is a selectable item (edge node)
    // Node indexing:
    // 0 to N-1 : original graph nodes
    // N to N+M-1 : edge nodes
    // s = N + M, t = N + M + 1
    int S = N + M, T = N + M + 1;
    MinCostFlow mcf(N + M + 2);

    // Edge nodes (select or skip each edge)
    for (int i = 0; i < M; ++i) {
        int u = edges[i].first;
        int v = edges[i].second;
        int edgeNode = N + i;
        // From S to edgeNode (select edge)
        mcf.addEdge(S, edgeNode, 1, 1); // cost = 1 for choosing edge

        // From edgeNode to u and v
        mcf.add ;
        
    }
}
