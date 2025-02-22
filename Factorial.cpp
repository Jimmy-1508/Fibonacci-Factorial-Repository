#include <iostream>
#include <chrono>
using namespace std;
using namespace chrono;

// Recursive function to calculate factorial
long long factorialRecursive(int n) {
    if (n == 0 || n == 1) return 1;
    return n * factorialRecursive(n - 1);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    auto start = high_resolution_clock::now();
    long long result = factorialRecursive(n);
    auto stop = high_resolution_clock::now();

    cout << "Factorial of " << n << " = " << result << endl;
    cout << "Time taken: " << duration_cast<microseconds>(stop - start).count() << " microseconds\n";

    return 0;
}
