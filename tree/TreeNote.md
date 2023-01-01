# Tree Note
## 199. Binary Tree Right Side View
- BFS 

## 230. Kth Smallest Element in BST
- My Method
    - Max Heap of Size K
- Actually, because this is a BST, we can just do an inorder traversal and return the kth element in the traversed nodes.

## 310. Minimum Height Trees
- Topological Sort
    - Construct the graph
    - Use BFS to remove nodes with indegree 1
- Optimization
    - Since the nodes are labeled from 0 - (n - 1), we don't need a map for the adjacency list.

