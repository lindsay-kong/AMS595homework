//q4.c

#include <iostream>
#include <vector>

// function to find prime factors of a number
std::vector<int> prime_factorize(int n) {
    std::vector<int> answer;
    
    //  divide by 2 until n is odd
    while (n % 2 == 0) {
        answer.push_back(2);
        n = n/2;
    }
    
    // check odd divisors from 3
    for (int x = 3; x*x <= n; x = x+2) {

        // divide by x until not divisible
        while (n % x == 0) {
            answer.push_back(x);
            n = n/x;
        }
    }
   
    // if n is a prime number greater than 2
    if (n > 2)
        answer.push_back(n);

    return answer;
}

//function used in q2
void print_vector(const std::vector<int>& v) {
    std::cout << "[";
    for (size_t i = 0; i < v.size(); i++) {
        std::cout << v.at(i);
        if (i < v.size() - 1) {
            std::cout << " ";
        }
    }
    std::cout << "]" << std::endl;
}

// test the result
void test_prime_factorize() {
    print_vector(prime_factorize(2));
    print_vector(prime_factorize(72));
    print_vector(prime_factorize(196));
}

int main() {
    test_prime_factorize();
    return 0;
}