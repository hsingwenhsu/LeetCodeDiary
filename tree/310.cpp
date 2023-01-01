class Solution {
public:
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
        // topological sort
        if (n == 1) return {0};

        // construct graph
        vector<vector<int>> adjlist(n, vector<int>());
        vector<int> indegrees(n, 0);
        int a, b;
        for (auto edge : edges) {
            a = edge[0], b = edge[1];
            indegrees[a]++;
            indegrees[b]++;
            adjlist[a].push_back(b);
            adjlist[b].push_back(a);
        }

        queue<int> bfs;
        for (int i = 0; i < n; i++) {
            if (indegrees[i] == 1) bfs.push(i);
        }

        vector<int> ans;
        while (!bfs.empty()) {
            int sz = bfs.size();
            ans.clear();
            while (sz--) {
                int node = bfs.front();
                bfs.pop();
                ans.push_back(node);
                for (auto nei : adjlist[node]) {
                    indegrees[nei]--;
                    if (indegrees[nei] == 1) bfs.push(nei);
                }
            }
        }
        return ans;
    }
};

