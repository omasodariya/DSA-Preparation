#include <iostream>
#include <limits.h>
#include <unordered_map>
#include <stack>
#include <list>
#include <vector>
using namespace std;

class graph
{
public:
    unordered_map<int, list<pair<int, int>>> adj;

    void addEdge(int u, int v, int weight)
    {
        pair<int, int> p = {v, weight};
        adj[u].push_back(p);
    }

    void printAdj()
    {
        for (auto i : adj)
        {
            cout << i.first << " -> ";
            for (auto j : i.second)
            {
                cout << "(" << j.first << "," << j.second << "),";
            }
            cout << endl;
        }
    }

    void dfs(int node, vector<int> &visited, stack<int> &st)
    {
        visited[node] = true;

        for (auto neighbour : adj[node])
        {
            if (!visited[neighbour.first])
            {
                dfs(neighbour.first, visited, st);
            }
        }
        st.push(node);
    }

    void SortestPath(int src,vector<int> &dist,stack<int> &topo){
    dist[src]=0;
    while(!topo.empty()){
        int el=topo.top();
        topo.pop();

        if(dist[el]!=INT_MAX){
            for(auto i:adj[el]){
                if(dist[el]+i.second < dist[i.first]){
                    dist[i.first]=dist[el]+i.second;
                }
            }

        }
    
    }

    }

};

int main()
{
    graph g;
    g.addEdge(0, 1, 5);
    g.addEdge(0, 2, 3);
    g.addEdge(1, 2, 2);
    g.addEdge(1, 3, 6);
    g.addEdge(2, 3, 7);
    g.addEdge(2, 4, 4);
    g.addEdge(2, 5, 2);
    g.addEdge(3, 4, -1);
    g.addEdge(4, 5, -2);

    g.printAdj();

    int n = 6;
    // Topological sort
    vector<int> visited(n);
    stack<int> s;

    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            g.dfs(i, visited, s);
        }
    }

    int src=1;
    vector<int> dist(n);

    for (int i = 0; i < n; i++)
        dist[i]=INT_MAX;
   
    g.SortestPath(src,dist,s);

    cout<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<dist[i]<<" ";
    }
    cout<<endl;
    
    

    return 0;
}

// https://www.codingninjas.com/studio/library/shortest-path-in-a-directed-acyclic-graph