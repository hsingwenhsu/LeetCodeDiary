class Solution {
public:
    vector<string> letterCombinations(string digits) {
        // bfs
        int n = digits.size();
        vector<string> digits2alpha(10, "");
        digits2alpha[2] = "abc"; digits2alpha[3] = "def"; digits2alpha[4] = "ghi";
        digits2alpha[5] = "jkl"; digits2alpha[6] = "mno"; digits2alpha[7] = "pqrs";
        digits2alpha[8] = "tuv"; digits2alpha[9] = "wxyz";

        queue<string> bfs;
        bfs.push("");
        for (int i = 0; i < n; i++) {
            int sz = bfs.size();
            int digit = digits[i] - '0';
            for (int j = 0; j < sz; j++) {
                string curr = bfs.front();
                bfs.pop();
                for (auto c : digits2alpha[digit]) {
                    string curr_copy = curr;
                    curr_copy.push_back(c);
                    bfs.push(curr_copy);
                }
            }
            if (i == n - 1) {
                break;
            }
        }
        vector<string> ans;
        while (!bfs.empty()) {
            if (bfs.front() != "") {
                ans.push_back(bfs.front());
            }
            bfs.pop();
        }
        return ans;
    }
};
