#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Edge {
public:
    int u, v, wt;
    Edge(int u, int v, int wt) {
        this->u = u;
        this->v = v;
        this->wt = wt;
    }
};

class Graph {
public:
    vector<Edge> edges;
    int v;
    vector<int> par;
    vector<int> rank;

    Graph(int v) {
        this->v = v;
        par.resize(v);
        rank.resize(v, 0);
        for(int i = 0; i < v; i++) {
            par[i] = i;
        }
    }

    int find(int x) {
        if(par[x] == x) return x;
        return par[x] = find(par[x]); // path compression
    }

    void unionByRank(int u, int v) {
        int parU = find(u);
        int parV = find(v);

        if(parU == parV) return;

        if(rank[parU] < rank[parV]) {
            par[parU] = parV;
        } else if(rank[parV] < rank[parU]) {
            par[parV] = parU;
        } else {
            par[parV] = parU;
            rank[parU]++;
        }
    }

    void addEdge(int u, int v, int wt) {
        edges.push_back(Edge(u, v, wt));
    }

    void kruskal() {  // ElogE
        sort(edges.begin(), edges.end(), [](Edge &a, Edge &b) {
            return a.wt < b.wt;
        });

        int minCost = 0;
        for(Edge e : edges) {
            int parU = find(e.u);
            int parV = find(e.v);

            if(parU != parV) {
                unionByRank(parU, parV);
                minCost += e.wt;
                cout << "Edge included: " << e.u << " - " << e.v << " wt: " << e.wt << endl;
            }
        }
        cout << "Minimum cost = " << minCost << endl;
    }
};

int main() {
    Graph graph(4);
    graph.addEdge(0, 1, 10);
    graph.addEdge(0, 2, 15);
    graph.addEdge(0, 3, 30);
    graph.addEdge(1, 3, 40);
    graph.addEdge(2, 3, 50);
    
    graph.kruskal();

    return 0;
}
