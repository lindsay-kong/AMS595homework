#include <iostream>
#include <vector>

// function to print integer
void print_vector(const std::vector<int>& v) {
    //  output the opening bracket
    std::cout << "[";
    // iterate through the vector
    for (size_t i = 0; i < v.size(); i++) {
        // output
        std::cout << v.at(i);
        if (i < v.size() - 1) {
            //  output spaces if it not the last element
            std::cout << " ";
        }
    }
    //  output the closing bracket
    std::cout << "]" << std::endl;
}

int main() {
    // test create a vector
    std::vector<int> v = {1, 2, 3, 4};
    // call the function
    print_vector(v);

    return 0;
}