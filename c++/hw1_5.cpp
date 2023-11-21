#include <iostream>
#include <vector>

// function in q2
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


void pascalstriangle(int n) {
    std::vector<std::vector<int>> triangle;

    for (int i = 0; i < n; ++i) {
        std::vector<int> row(i + 1, 1);
        if (i > 1) {
            for (int j = 1; j < i; ++j) {
                row[j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
            }
        }
        triangle.push_back(row);

        
        print_vector(row);
    }
}

int main() {
    pascalstriangle(5);

    return 0;
}