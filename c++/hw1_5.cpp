#include <iostream>
#include <vector>

// function in q2 to print vector
void print_vector(const std::vector<int>& v) {
    std::cout << "[";
    for (size_t i = 0; i<v.size(); i++) {
        std::cout << v.at(i);
        if (i<v.size() - 1) {
            std::cout << " ";
        }
    }
    std::cout << "]" << std::endl;
}

// generate  pascal triangle
void pascalstriangle(int n) {
    std::vector<std::vector<int>> triangle;

    // loop each row
    for (int i = 0; i<n; ++i) {
        // create vector for the current row i+1 elements
        std::vector<int> row(i+1, 1);

        // use the values from the previous row
        if (i>1) {
            for (int j = 1; j<i; ++j) {
                row[j] = triangle[i-1][j-1] + triangle[i-1][j];
            }
        }

        // add current row 
        triangle.push_back(row);

        // print current row
        print_vector(row);
    }
}

int main() {

    // call the funtion
    pascalstriangle(5);

    return 0;
}