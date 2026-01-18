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
    