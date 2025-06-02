#  Graph Traversals using Boost Graph Library (C++)

This repository demonstrates how to implement **Depth-First Search (DFS)** and **Breadth-First Search (BFS)** on an **undirected graph** using the powerful [Boost Graph Library (BGL)](https://www.boost.org/doc/libs/release/libs/graph/). The project focuses on tracking edge usage and vertex visits during traversal.

---

##  Key Concepts Used

###  Edge Descriptor
An **edge descriptor** in Boost is a special object used to refer to a specific edge inside the graph. It acts like a reference — it doesn't hold the edge values directly but allows you to access its source, target, and properties using:
```cpp
source(e, g);
target(e, g);
g[e].id;  // Access edge's custom property
