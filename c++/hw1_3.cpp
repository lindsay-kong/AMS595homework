#include <iostream>


int main() {
    // initialize first two Fibonacci sequence 
    int fib1 = 1, fib2 = 2;
    // output 
    std::cout << " " << fib1 << " " << fib2 << " ";

    // Fibonacci sequence using a while loop
    while (fib1 + fib2 < 4000000) {
        // output
        std::cout << fib1 + fib2 << " ";
        // update fib1 and fib2 for the next iteration
        int temp = fib2;
        fib2 = fib1 + fib2;
        fib1 = temp;
    }

    return 0;
}