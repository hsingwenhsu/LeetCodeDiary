class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> words;
        stringstream ss(s);
        while (ss.good()) {
            string token;
            getline(ss, token, ' ');
            words.push_back(token);
        }

        unordered_map<char, string> p2s;
        unordered_map<string, char> s2p;
        int n = pattern.length();
        if (words.size() != n) return false;
        for (int i = 0; i < n; i++) {
            char c = pattern[i];
            string word = words[i];
            if (p2s.find(c) != p2s.end()) {
                if (p2s[c] != word) return false;
            } else {
                if (s2p.find(word) != s2p.end()) return false;
                p2s[c] = word;
                s2p[word] = c;
            }
        }
        return true;
    }
};
