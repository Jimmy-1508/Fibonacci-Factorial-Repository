

# fibonacci--factorial-algorithm-design
Fibonacci series and factorial codes using C++ to show algorithm design.

- **REG NUMBER: EB3/61515/22 
- **NAME: James Kariuki 

---

## Factorial.cpp  
### Detailed Explanation:
#### Function `factorialRecursive(int n)`:
- This is a recursive function that calculates the factorial of `n`.
- It calls itself with `n - 1` until `n == 0`, where it returns `1` (base case).
- **Base Case:** If `n == 0`, the factorial is defined as `1`.
- **Recursive Case:** Otherwise, it computes `n * factorial(n - 1)`.

### Main Function:
- Asks the user to input a non-negative number.
- If the number is negative, it outputs an error message.
- Otherwise, it computes the factorial and displays the result.
- Measures the runtime taken to compute the factorial using the `chrono` library.

---

## Fibonacci.cpp  
### Detailed Explanation:
#### Function `fibonacciRecursive(int n)`:
- This function calculates the `n`th Fibonacci number recursively.
- **Base Cases:** `fibonacci(0) = 0` and `fibonacci(1) = 1`.
- **Recursive Case:** For any `n > 1`, it computes `fibonacci(n - 1) + fibonacci(n - 2)`.

#### Function `printFibonacci(int n)`:
- This function prints the Fibonacci series up to the `n`th term.
- It uses a loop to call `fibonacciRecursive(i)` for each index `i` from `0` to `n-1`.

### Main Function:
- Asks the user for the number of terms they want in the Fibonacci series.
- If the number is negative, it displays an error message.
- Otherwise, it calls `printFibonacci(n)` to print the Fibonacci sequence.
- Measures the runtime taken to compute the Fibonacci series using the `chrono` library.

---

## Design of Algorithms:
### Fibonacci Series:
- **Time Complexity:** `O(2^n)` - Due to the recursive calls that recompute values multiple times.
- **Space Complexity:** `O(n)` - Due to the recursive function stack depth.

### Factorial:
- **Time Complexity:** `O(n)` - We are making `n` recursive calls to compute the factorial.
- **Space Complexity:** `O(n)` - The space complexity is due to the recursive calls that will be stored in the stack until the base case is reached.

---

