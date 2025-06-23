#include<iostream>
#include<list>
#include<queue>
#include<vector>
using namespace std;
class Graph{
    int v;
    list<int>*l;
    public:
    Graph(int v){
        this ->v=v;
        l=new list<int>[v];
    }

    void addEdge(int u,int v){
        l[u].push_back(v);
        l[v].push_back(u);
    }

    // void print(){
    //     for (int u = 0;  u< v; u++)
    //     {
    //         list<pair<int,int>>neighour=l[u];
    //         cout<<u<<": ";
    //         for(pair<int,int>i:neighour){
    //             cout<<"("<<i.first<<","<<i.second<<")";

    //         }
    //         cout<<endl;
    //     }
        
    // }
    void bfs(){
        queue<int>q;
        vector<bool>vis(v,false);
        q.push(0);
        vis[0]=true;
        while(!q.empty()){
        int u=q.front();
        q.pop();
        cout<<u<<" ";
        list<int>neighour=l[u];
        for(int i:neighour){
            if(!vis[i]){
                vis[i]=true;
                q.push(i);
            }
        }

        }
        cout<<endl;

    }

};
int main (){
    Graph b(5);
    b.addEdge(0,1);
    b.addEdge(1,2);
    b.addEdge(1,3);
    b.addEdge(2,3);
    b.addEdge(2,4);

    b.bfs();
    



    return 0;
}