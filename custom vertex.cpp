#include <iostream>
#include <boost/graph/adjacency_list.hpp>
using namespace boost;
using namespace std;

struct VertexProperties {
    double x, y;        
    double width, height; 
    int level;           
};

typedef adjacency_list<vecS, vecS, directedS, VertexProperties> Graph;
typedef graph_traits<Graph>::vertex_descriptor Vertex;

int main() {
    Graph g;
 Vertex v1 = add_vertex(g);
    g[v1].x = 0;
    g[v1].y = 0;
    g[v1].width = 100;
    g[v1].height = 100;
    g[v1].level = 0;

     Vertex v2 = add_vertex(g);
    g[v2].x = 0;
    g[v2].y = 0;
    g[v2].width = 50;
    g[v2].height = 50;
    g[v2].level = 1;

    add_edge(v1, v2, g);

    cout << "Vertex 1 (Root): (" << g[v1].x << ", " << g[v1].y << "), Size: "
         << g[v1].width << "x" << g[v1].height << ", Level: " << g[v1].level << endl;

    cout << "Vertex 2 (NW child): (" << g[v2].x << ", " << g[v2].y << "), Size: "
         << g[v2].width << "x" << g[v2].height << ", Level: " << g[v2].level << endl;

    return 0;
}