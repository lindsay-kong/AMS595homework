#include <iostream>
#include <cmath>
#include <vector>

//code use in q1
struct PiResults {
    // value of π
    double approx;

    double error;
};

double calculateF(double x) {
    return sqrt(1 - x*x);
}

PiResults pi_approx(int N) {
    double sum = 0.0;
    double deltaX = 1.0 / N;

    for (int i = 0; i <= N; ++i) {  
        double x_i = i * deltaX;
        sum += calculateF(x_i);
    }
   
    double piApprox = (deltaX/2.0) * (calculateF(0) + 2.0*sum + calculateF(1));
    double absoluteError = fabs(M_PI - piApprox);
   
    PiResults results;
    results.approx = piApprox;
    results.error = absoluteError;
    return results;
}


//new code
//function to approximate pi use numerical integration with N intervals
PiResults* approximations(const std::vector<int>& intervals) {

    // dynamically allocate an array to store the results
    PiResults* resultsArray = new PiResults[intervals.size()];

    // compute pi approximation for each interval
    for (size_t i = 0; i < intervals.size(); ++i) {
        resultsArray[i] = pi_approx(intervals[i]);
    }

    return resultsArray;
}

int main() {
    int numIntervals;
    // enter the N
    std::cout << "Enter the number of intervals (N): ";
    std::cin >> numIntervals;

    PiResults* resultsArray = approximations({numIntervals});

    // output
    std::cout << "Approximated value of pi: " << resultsArray[0].approx << std::endl;
    std::cout << "Absolute error: " << resultsArray[0].error << std::endl;
    
    // free the memory
    delete[] resultsArray;
     
    return 0;
}




