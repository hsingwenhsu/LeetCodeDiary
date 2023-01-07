# Bit Manipulation Note
## Basic Knowledge 
- xor of zero and a number results in the number itself
```
x ^ 0 = x
```
- xor two equal bits results in zero
```
x ^ x = 0
```
- Self-inverse property
```
If x ^ y = z
Then x ^ y ^ y = z ^ y = x
```
    - If we want to search for two numbers x, y such that their x or is equal to z
    - If we know that y is in the set, we can check if x exists in the set too by checking 
      if z ^ y is in the set too. 
    - Example. LeetCode 421. Maximum XOR of Two Numbers in an Array 
