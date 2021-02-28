#include <bits/stdc++.h>
using namespace std;

class Graph {
   public:
    vector<vector<int>> adj;
    void addEdge(int v1, int v2) { adj[v1].push_back(v2); }
    void removeEdge(int v1, int v2) { adj[v1].erase(v2); }
};
int main() {}