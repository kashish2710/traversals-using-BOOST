#include <iostream>
using namespace std;
//recursive method
void dfs(int node, bool visited[], int adj[5][5]) {
    cout << node << " ";
    visited[node] = true;

    for (int i = 0; i < 5; i++) {
        if (adj[node][i] == 1 && !visited[i]) {
            dfs(i, visited, adj);
        }
    }
}

int main() {
    int adj[5][5] = {  // same graph
        {0,1,1,0,0},
        {1,0,1,1,0},
        {1,1,0,0,1},
        {0,1,0,0,1},
        {0,0,1,1,0}
    };

    bool visited[5] = {false};

    cout << "DFS: ";
    dfs(0, visited, adj);

    return 0;
}
