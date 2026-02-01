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

- **Greedy Algorithm Approach**
- **Finds Minimum Spanning Tree (MST)**
- **Cycle Detection Using Union-Find**
- **Edge List Graph Representation**
- **Fully Commented Code** for clarity and learning

---

## 📋 Example Run

**Graph Structure (edge list format):**

```
0 - 1 (10)
0 - 2 (6)
0 - 3 (5)
1 - 3 (15)
2 - 3 (4)
```

**Output (edges in the Minimum Spanning Tree):**

```
2 - 3   4
0 - 3   5
0 - 1   10
Total weight of MST: 19
```

---

## ⚙ How It Works

1. **Sort All Edges**
   - Arrange edges in increasing order of weight.

2. **Select Edges Greedily**
   - Add the smallest edge that does not form a cycle.

3. **Union-Find Structure**
   - Uses Disjoint Set to detect cycles efficiently.

4. **Stop When MST is Complete**
   - MST contains exactly (V − 1) edges.

---

## 🛠 How to Run

### 1️⃣ Using a local C++ compiler
