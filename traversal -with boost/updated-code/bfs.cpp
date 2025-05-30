#include <boost/graph/adjacency_list.hpp>
#include <boost/graph/breadth_first_search.hpp>
#include <iostream>

using namespace boost;
using namespace std;

struct EdgeProperty {
    int id;
};

typedef adjacency_list<vecS, vecS, undirectedS, no_property, EdgeProperty> Graph;
typedef graph_traits<Graph>::edge_descriptor Edge;

int edge_id = 0;

void add_edge_with_id(int u, int v, Graph& g) {
    Edge e;
    bool inserted;
    tie(e, inserted) = add_edge(u, v, g);
    g[e].id = edge_id++;
}

class MyBFSVisitor : public default_bfs_visitor {
public:
    template <typename Edge, typename Graph>
    void tree_edge(Edge e, const Graph& g) const {
        cout << " Edge ID: " << g[e].id << ;
        cout << source(e, g) << " - " << target(e, g) << endl;
    }

    template <typename Vertex, typename Graph>
    void discover_vertex(Vertex u, const Graph&) const {
        cout << "Visited Node: " << u ;
    }
};

int main() {
    Graph g(5);

    add_edge_with_id(0, 1, g);
    add_edge_with_id(0, 2, g);
    add_edge_with_id(1, 2, g);
    add_edge_with_id(1, 3, g);
    add_edge_with_id(2, 4, g);
    add_edge_with_id(3, 4, g);

    cout << " Traversal in Undirected Graph:\n";
    breadth_first_search(g, vertex(0, g), visitor(MyBFSVisitor()));

    return 0;
}
