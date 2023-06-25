#include <iostream>
#include <vector>
#include <queue>
#include <cstring>

using namespace std;

#define maxn 510
#define INF 1e18

struct Edge {
    int from, to, dist;
};

struct item {
    int d, u;
    bool operator < (const item& rs) const {
        return d > rs.d;
    }
};

int n;  // Number of nodes
vector<int> G[maxn];  // Graph representation
vector<Edge> edges;  // List of edges
long long d[maxn];  // Shortest distance from the source node
bool visited[maxn];  // Array to track visited nodes
int p[maxn];  // Array to store the shortest path

void run_dijkstra(int s) {
    priority_queue<item> pq;
    for (int i = 0; i < n; i++) {
        d[i] = INF;
    }
    d[s] = 0;

    memset(visited, false, sizeof(visited));
    pq.push((item){0, s});

    while (!pq.empty()) {
        item x = pq.top();
        pq.pop();
        int u = x.u;

        if (visited[u]) continue;
        visited[u] = true;

        for (int i = 0; i < G[u].size(); i++) {
            Edge& e = edges[G[u][i]];

            if (d[e.to] > d[u] + e.dist) {
                d[e.to] = d[u] + e.dist;
                p[e.to] = u;
                pq.push((item){d[e.to], e.to});
            }
        }
    }
}