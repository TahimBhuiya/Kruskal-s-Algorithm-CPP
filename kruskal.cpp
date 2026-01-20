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

  