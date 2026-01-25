#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Structure to represent an edge
struct Edge {
    int src, dest, weight;
};

// Disjoint Set (Union-Find) class
class DisjointSet {
    vector<int> parent, rank;

public:
    // Initialize disjoint set
    DisjointSet(int n) {
        parent.resize(n);
        rank.resize(n, 0);

        for (int i = 0; i < n; i++)
            parent[i] = i;
    }

    // Find the parent of a node with path compression
    int find(int x) {
        if (parent[x] != x)
            parent[x] = find(parent[x]);
        return parent[x];
    }

    // Union two sets
    void unite(int x, int y) {
        int rootX = find(x);
        int rootY = find(y);

        if (rootX != rootY) {
            if (rank[rootX] < rank[rootY])
                parent[rootX] = rootY;
            else if (rank[rootX] > rank[rootY])
                parent[rootY] = rootX;
            else {
                parent[rootY] = rootX;
                rank[rootX]++;
            }
        }
    }
};

// Comparator to sort edges by weight
bool compareEdges(Edge a, Edge b) {
    return a.weight < b.weight;
}

// Kruskal's Algorithm function
void kruskalMST(vector<Edge>& edges, int V) {
    // Sort edges by increasing weight
    sort(edges.begin(), edges.end(), compareEdges);

    DisjointSet ds(V);
    vector<Edge> mst;

    // Process edges one by one
    for (Edge e : edges) {
        int u = e.src;
        int v = e.dest;

        // Check if adding this edge forms a cycle
        if (ds.find(u) != ds.find(v)) {
            mst.push_back(e);
            ds.unite(u, v);
        }
    }

    // Print the Minimum Spanning Tree
    cout << "Edges in the Minimum Spanning Tree:\n";
    int totalWeight = 0;

    for (Edge e : mst) {
        cout << e.src << " - " << e.dest << " : " << e.weight << endl;
        totalWeight += e.weight;
    }

    cout << "Total weight of MST: " << totalWeight << endl;
}

// Main function
int main() {
    int V = 4;  // Number of vertices

    vector<Edge> edges = {
        {0, 1, 10},
       
       
        
       
    };

    

    
}