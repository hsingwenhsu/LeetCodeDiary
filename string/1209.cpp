class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char, int>> cnt;
        for (auto c : s) {
            if (cnt.empty() || cnt.top().first != c) {
                cnt.push({c, 1});
            } else {
                if (cnt.top().first == c) {
                    int currCnt = cnt.top().second;
                    cnt.pop();
                    cnt.push({c, currCnt + 1});
                }
            }
            // check if size is k
            if (cnt.top().second == k) {
                cnt.pop();
            }
        }
        string res = "";
        while (!cnt.empty()) {
            for (int i = 0; i < cnt.top().second; i++)
                res.push_back(cnt.top().first);
            cnt.pop();
        }
        reverse(res.begin(), res.end());
        return res;
    }
};