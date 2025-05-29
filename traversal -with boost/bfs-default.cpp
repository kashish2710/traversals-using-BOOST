#include <boost/graph/adjacency_list.hpp>
#include <boost/graph/breadth_first_search.hpp>

using namespace boost;

int main() {
    typedef adjacency_list<vecS, vecS, undirectedS> Graph;
    Graph g(5);

    add_edge(0, 1, g);
    add_edge(0, 2, g);
    add_edge(1, 2, g);
    add_edge(1, 3, g);
    add_edge(2, 4, g);
    add_edge(3, 4, g);

    breadth_first_search(g, vertex(0, g), visitor(default_bfs_visitor()));

    return 0;
}
