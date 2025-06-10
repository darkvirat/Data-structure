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

    void printGraph() {
        for (int u = 0; u < v; u++) {
            list<int>neighbors=l[u];
            cout << "Node " << u << " -> ";
            for(int v:neighbors){
                cout<<v<<" ";
            }
            cout << endl;
        }
    }
};
int main() {
    Graph g(7);

    // Providing weights for each edge
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 3);
    g.addEdge(2, 4);
    g.addEdge(3, 5);
    g.addEdge(4, 5);
    g.addEdge(5, 6);

    g.printGraph(); // Fixed function call
    
    
    return 0;
}