# Useful CPP Code Snippets
## String
### Parsing Numbers in a string
- We can use stringstream to parse numbers in a string
- std::istream::operator>>
```
istream& operator>> (int& val);
istream& operator>> (long& val);
...
```
- Ex. LeetCode 592. Fraction Addition and Subtraction
    - Can even parse negative numbers!
    - Remember to use a char to skip non numeric value
    ```
    string fractionAddition(string expression) {
        stringstream ss(expression);
        int A = 0, B = 1, a, b;
        char _;
        // A, B represents the current fraction
        while (ss >> a >> _ >> b) {
            A = A * b + a * B;
            B *= b;
            // find gcd
            int g = gcd(A, B);
            A /= g;
            B /= g;
        }
        return to_string(A) + "/" + to_string(B);
    }
    ```

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