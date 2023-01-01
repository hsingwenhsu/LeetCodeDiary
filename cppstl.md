# Useful CPP Code Snippets
## String
### How to split a string of words into a vector of words:
```
vector<string> words;
stringstream ss(s);
while (ss.good()) {
    string token;
    getline(ss, token, ' ');
    words.push_back(token);
}
```
- getline documentation
    ```
    istream& getline (istream& is, string& str, char delim);
    istream& getline (istream& is, string& str);
    ``` 