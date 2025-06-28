#include<iostream>
#include<list>
#include<vector>
using namespace std;

class Graph {
public:
    int v;
    list<int>* l;

    Graph(int v) {
        this->v = v;
        l = new list<int>[v];
    }

    void addEdge(int u, int v) {
        l[u].push_back(v);
        l[v].push_back(u);
    }

    // Helper function for cycle detection
    bool dfsCycle(int node, vector<bool>& vis, int parent) {
        vis[node] = true;
        list<int>neighour=l[node];
        for (int neighbor : l[node]) {
            if (!vis[neighbor]) {
                if (dfsCycle(neighbor, vis, node)) {
                    return true;
                }
            } else if (neighbor != parent) {
                // Found a back edge (cycle)
                return true;
            }
        }

        return false;
    }

    // Function to detect cycle in any component
    bool isCycle() {
        vector<bool> vis(v, false);
        for (int i = 0; i < v; i++) {
            if (!vis[i]) {
                if (dfsCycle(i, vis, -1)) {
                    return true;
                }
            }
        }
        return false;
    }
};

int main() {
    Graph b(7);
    b.addEdge(0, 1);
    b.addEdge(0, 2);
    b.addEdge(2, 3);
    b.addEdge(1, 5);
    b.addEdge(3, 4);
    b.addEdge(5, 4);
    b.addEdge(4, 6);

    if (b.isCycle()) {
        cout << "Cycle detected\n";
    } else {
        cout << "No cycle detected\n";
    }

    return 0;
}
