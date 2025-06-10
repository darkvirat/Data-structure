#include <iostream>
#include <vector>
#include <queue>
#include <list>

using namespace std;

class Graph {
    int v;
    list<int> *l;

public:
    Graph(int v) {
        this->v = v;
        l = new list<int>[v];
    }

    void addEdge(int u, int v) {
        l[u].push_back(v);
        l[v].push_back(u); // Since it's an undirected graph
    }

void dfshelp(int u, vector<bool>& vis) {
    vis[u] = true;
    cout << u << " ";
    for (int i : l[u]) { // Direct iteration, avoids unnecessary copying
        if (!vis[i]) {
            dfshelp(i, vis);
        }
    }
}

void dfs() {
    vector<bool> vis(v, false);
    cout << "DFS Traversal: ";
    for (int i = 0; i < v; i++) {
        if (!vis[i]) {
            dfshelp(i, vis);
            cout << "| "; // Separator for disconnected components
        }
    }
    cout << endl;
}

};

 
int main(){
    Graph g(7);
        g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 3);
    
    g.addEdge(4, 5);
    g.addEdge(5, 6);

    g.dfs();
    return 0 ;
}