# String Note
## 443. String Compression
- Key Idea: Use a variable called index to keep track of the current string that we are rebuilding
- Use varialbe i to keep track of the char that we are processing in the string
- Use variable j to count the group size (while j < n && chars[i] == chars[j]) 

## 592. Fraction Addition and Subtraction
- Key Idea: Use stringstream to parse the input
- Let `A` be the denominator, `B` be the numerator so far. So `A` is initially 0, and `B` is initially 1
- Let `a`, `b` be the denominator and numerator that we are currently reading
- New result = $A / B + a / b$ = $(A*b + a*B) / (B*b)$
- Use `gcd(m, n)` in `<numeric>` (C++ 17) to find the gcd of A and B

## 1209. Remove All Adjacent Duplicates in String II
- Use a stack of `pair<char, int>` to keep track of the number of chars
- If the count reaches k, pop this pair from the stack
- Else, just update the count number and put the pair back into the stack
- In the end, all the `pair<char, int>` corresponds to the character and their count (<k)
- Append them into a string
- Since it is a stack, we should reverse the resulting string
