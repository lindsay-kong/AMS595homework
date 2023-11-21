//q4.b
#include <iostream>
#include <vector>

// function to find factors of a number
std::vector<int> factorize(int n) {
    std::vector<int> answer;

    // iterate from 1 to n check for factors
    for (int i = 1; i <= n; ++i) {
        if (n % i == 0)
            answer.push_back(i);
    }

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

//test result
void test_factorize() {
    print_vector(factorize(2));
    print_vector(factorize(72));
    print_vector(factorize(196));
}

int main() {
    test_factorize();
    return 0;
}