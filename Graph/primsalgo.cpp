#include <iostream>
#include <list>
#include <vector>
#include <queue>
#include <climits>
using namespace std;

class Graph {
    int V;  // Number of vertices
    list<pair<int, int>>* l; // Adjacency list: (neighbor, weight)

public:
    Graph(int V) {
        this->V = V;
        l = new list<pair<int, int>>[V];
    }

    void addEdge(int u, int v, int wt) {
        l[u].push_back({v, wt});
        l[v].push_back({u, wt}); // Because MST needs an undirected graph
    }

    void primsAlgo(int src) {
        // Min-heap: (weight, vertex)
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

        vector<bool> mst(V, false); // To mark visited (in MST)
        pq.push({0, src}); // Start from src with 0 cost

        int ans = 0; // Total cost of MST

        while (!pq.empty()) {
            int u = pq.top().second; // Node
            int wt = pq.top().first; // Edge weight to node
            pq.pop();

            if (!mst[u]) {
                mst[u] = true;   // Mark node as included in MST
                ans += wt;       // Add weight to total cost

                // Traverse all neighbors
                list<pair<int,int>>neighbors=l[u];
                for (pair<int,int>nbr : l[u]) {
                    int v = nbr.first;      // Neighbor node
                    int edgeWt = nbr.second; // Edge weight
                    if (!mst[v]) {
                        pq.push({edgeWt, v});
                    }
                }
            }
        }

        cout << "Final cost of MST = " << ans << endl;
    }
};

int main() {
    Graph g(5);

    g.addEdge(0, 1, 10);
    g.addEdge(0, 2, 15);
    g.addEdge(0, 3, 30);
    g.addEdge(1, 3, 40);
    g.addEdge(2, 3, 50);
     

    g.primsAlgo(0); // Start MST from node 0

    return 0;
}
