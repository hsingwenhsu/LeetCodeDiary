#include <numeric> // for gcd in C++ 17
class Solution {
public:
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
};
