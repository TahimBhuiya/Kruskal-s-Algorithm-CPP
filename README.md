# Kruskal’s Algorithm in C++

## 📌 Overview

This C++ program demonstrates **Kruskal’s Algorithm**, a greedy graph algorithm used to find the **Minimum Spanning Tree (MST)** of a connected, weighted, undirected graph.

Kruskal’s algorithm builds the MST by sorting all edges by weight and adding them one by one, ensuring no cycles are formed using the **Disjoint Set (Union-Find)** data structure.

Steps Kruskal’s Algorithm follows:

1. Sort all edges by increasing weight.
2. Pick the smallest edge that does not form a cycle.
3. Add the edge to the MST.
4. Repeat until the MST contains (V − 1) edges.

---

## 🔧 Features
