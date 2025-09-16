<h1 style="text-align:center;"> Graphs</p>

### 🔹 What is a Graph?

- Graphs are a fundamental data structure used in computer science to represent relationships or connections between objects
- A graph is a collection of nodes (also called vertices) connected by edges.
- Vertices (Nodes): The entities or points in the graph.
- Edges (Links): The connections between the vertices.

### 🔹 Types of Graphs

1. **Directed Graph (Digraph):**

- Edges have a direction (from one vertex to another).
- Example: Twitter following graph.

2. **Undirected Graph:**

- Edges don’t have a direction.
- Example: Facebook friendship graph.

3. **Weighted Graph:**

- Each edge has a weight or cost.
- Example: Road map with distances.

4. **Unweighted Graph:**

- Edges don’t have weights.

5. **Cyclic vs. Acyclic:**
   - Cyclic: Graph contains a cycle (loop).
   - Acyclic: No cycles. (Example: Tree is an acyclic graph)

6. **Connected vs. Disconnected:**
   - Connected: There’s a path between every pair of vertices.
   - Disconnected: Some vertices can't be reached from others.

### 🔹 Graph Representations

1. Adjacency Matrix:
   - 2D array of size VxV where V is the number of vertices.
   - Good for dense graphs.
   - Easy edge lookup: O(1) time.

2. Adjacency List:
   - Array of lists. Each index represents a vertex and stores a list of connected vertices.
   - Efficient for sparse graphs.
   - Saves space: O(V + E)

### 🔹 Common Graph Algorithms

- Depth-First Search (DFS)
- Breadth-First Search (BFS)
- Dijkstra’s Algorithm (shortest path)
- Bellman-Ford Algorithm
- Floyd-Warshall Algorithm
- Kruskal’s Algorithm (minimum spanning tree)
- Prim’s Algorithm (minimum spanning tree)
- Topological Sorting (for DAGs)
