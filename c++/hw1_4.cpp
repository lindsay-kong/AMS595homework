#include <iostream>

//q.4a
// check if a number is prime
bool isprime(int n) {
    // check if n is less than 2
    if (n < 2) {
        return false;
    }

    //  check for divisibility by numbers 2 to n/2
    for (int i = 2; i <= n / 2; ++i) {
        if (n % i == 0) {
            // if n is divisible by any number not prime
            return false;
        }
    }

    return true;
}

// test
void test_isprime() {
    //prime
    std::cout << "isprime(2) = " << isprime(2) << '\n';   
    //not prime  
    std::cout << "isprime(1) = " << isprime(1) << '\n';     
    //prime
    std::cout << "isprime(17) = " << isprime(17) << '\n';   
}

//main function
int main() {
    test_isprime();
    return 0;
}
