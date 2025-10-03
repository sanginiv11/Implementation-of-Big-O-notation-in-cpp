# Implementation-of-Big-O-notation-in-cpp
## Objective
Build intuition for time complexity by demonstrating constant, linear, and quadratic behaviors with small example functions.

Software:
- MinGW C/C++ compiler
- Visual Studio Code
- Online C++ compiler

***

## Program Time complexity
### Explanation and theory
Time complexity characterizes how running time scales with input size. Constant time, $$O(1)$$, means the operation cost does not change with the size of the input (e.g., returning the first element). Linear time, $$O(n)$$, increases proportionally with the number of items (e.g., iterating to print all elements). Quadratic time, $$O(n^2)$$, arises when nested loops process all pairs of items. The program illustrates these with three functions: one that returns one element, one that walks through all elements, and one that iterates over every pair.

### Algorithm
- Start
- Prepare a vector of sample integers
- Call a function that returns the first element to show $$O(1)$$
- Call a function that prints all elements to show $$O(n)$$
- Call a function that prints all ordered pairs to show $$O(n^2)$$
- Print outputs for each stage
- End

***

## Conclusion
- $$O(1)$$ operations are constant-time and ideal when random access is available.  
- $$O(n)$$ work grows linearly and fits moderate inputs well.  
- $$O(n^2)$$ escalates quickly and becomes impractical at large scales.
Recognizing these patterns helps anticipate performance, pick algorithms that fit data sizes, and design code that scales gracefully.
