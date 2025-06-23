#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <list>

using namespace std;

class Graph {
    int v;
    list<int>* l;

public:
    Graph(int v) {
        this->v = v;
        l = new list<int>[v];
    }

    // Directed graph: only add edge from u to v
    void addEdge(int u, int v) {
        l[u].push_back(v);
    }

    void dfsHelper(int u, vector<bool>& vis,stack<int>&v) {
        vis[u] = true;
        for (int nbr : l[u]) {
            if (!vis[nbr]) {
                dfsHelper(nbr, vis,v);
            }
        }
        v.push(u);
    }

    void dfs( ) {
        vector<bool> vis(v, false);
        stack<int>v;
        for (int i = 0; i < this->v; i++) {
    if (!vis[i]) {
        dfsHelper(i, vis, v);
    }
}


      while(!v.empty()){
        cout<<v.top()<<" ";
        v.pop();
      }
        
    }
};

int main() {
    Graph g(6);

    // Directed graph edges
    g.addEdge(5,0);
    g.addEdge(4,0);
    g.addEdge(5,2);
    g.addEdge(4,1);
    g.addEdge(2,3);
    g.addEdge(3,1);
    

    g.dfs(); // Start DFS from node 0

    return 0;
}
