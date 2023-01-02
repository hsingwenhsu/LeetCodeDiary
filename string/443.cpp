class Solution {
public:
    int compress(vector<char>& chars) {
        int index = 0; // the index of the string that we are reconstructing
        int i = 0; // global iterator
        
        int n = chars.size();
        while (i < n) {
            int j = i; // iterate through a group
            while (j < n && chars[i] == chars[j])
                j++;
            chars[index++] = chars[i];
            if (j - i > 1) { // group size > 1
                string cntStr = to_string(j - i);
                for (int c = 0; c < cntStr.size(); c++) {
                    chars[index++] = cntStr[c];
                }
            }
            i = j; 
        }
        return index;
    }
};
