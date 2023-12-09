#include <iostream>
//include the header file for function declarations
#include "q1.h"
#include "q2.h"

int main() {
    // Q1
    int numIntervalsQ1;
    std::cout << "Enter the number of intervals (N) for Q1: ";
    std::cin >> numIntervalsQ1;
    
    // call the pi_approx function for Q1
    PiResults resultsQ1 = pi_approx(numIntervalsQ1);

    std::cout << "Q1 - Approximated value of pi: " << resultsQ1.approx << std::endl;
    std::cout << "Q1 - Absolute error: " << resultsQ1.error << std::endl;

    // Q2
    std::vector<int> intervalsQ2 = {101, 102, 103, 104, 105, 106, 107};
    // call the approximations function for Q2
    PiResults* resultsArrayQ2 = approximations(intervalsQ2);
    
    // output
    for (size_t i = 0; i < intervalsQ2.size(); ++i) {
        std::cout << "Q2 - Approximated value of pi (N=" << intervalsQ2[i] << "): " << resultsArrayQ2[i].approx << std::endl;
        std::cout << "Q2 - Absolute error (N=" << intervalsQ2[i] << "): " << resultsArrayQ2[i].error << std::endl;
    }

    // Free the memory
    delete[] resultsArrayQ2;

    return 0;
}
