

//Overriding discover_vertex to print visited node
#include <boost/graph/adjacency_list.hpp>
#include <boost/graph/breadth_first_search.hpp>
#include <iostream>

using namespace boost;
using namespace std;


class custom_bfs_visitor : public default_bfs_visitor {
public:
    template <typename Vertex, typename Graph>
    void discover_vertex(Vertex u, const Graph& g) const {
        cout << u << " ";
    }
};

int main() {
   
    typedef adjacency_list<vecS, vecS, undirectedS> Graph;
    Graph g(5); 

   
    add_edge(0, 1, g);
    add_edge(0, 2, g);
    add_edge(1, 2, g);
    add_edge(1, 3, g);
    add_edge(2, 4, g);
    add_edge(3, 4, g);

    // 🔹 Step 4: Run BFS with custom visitor
    cout << "BFS Traversal: ";
    breadth_first_search(g, vertex(0, g), visitor(custom_bfs_visitor()));
    cout << endl;

    return 0;
}
