#include <iostream>
#include <chrono>
using namespace std;
using namespace chrono;

// Recursive function to find the nth Fibonacci number
int fibonacciRecursive(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacciRecursive(n - 1) + fibonacciRecursive(n - 2);
}

// Function to print Fibonacci series
void printFibonacci(int n) {
    for (int i = 0; i < n; i++) {
        cout << fibonacciRecursive(i);
        if (i < n - 1) cout << ", ";
    }
}

int main() {
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;

    auto start = high_resolution_clock::now(); // Start timing
    cout << "Fibonacci Series: ";
    printFibonacci(n);
    auto stop = high_resolution_clock::now(); // Stop timing

    cout << "\nTime taken: " << duration_cast<microseconds>(stop - start).count() << " microseconds\n";
    return 0;
}
