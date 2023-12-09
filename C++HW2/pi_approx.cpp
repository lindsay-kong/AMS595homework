#include <iostream>
#include <cmath>

// struct to store the result
struct PiResults {
    // value of π
    double approx;
    // absolute error
    double error;
};

// calculate the function value for a given x
double calculateF(double x) {
    return sqrt(1 - x*x);
}

// approximate the value of π using the trapezoidal rule
PiResults pi_approx(int N) {
    double sum = 0.0;
    double deltaX = 1.0 / N;

    for (int i = 0; i <= N; ++i) {  
        double x_i = i * deltaX;
        sum += calculateF(x_i);
    }
   
    // calculate the absolute error between the computed approximation and the true value of π
    double piApprox = (deltaX/2.0) * (calculateF(0) + 2.0*sum + calculateF(1));
    double absoluteError = fabs(M_PI - piApprox);
   
    // create a structure to store the results
    PiResults results;
    results.approx = piApprox;
    results.error = absoluteError;
    return results;
}

// main function
int main() {
    int numIntervals;
    // enter the N
    std::cout << "Enter the number of intervals (N): ";
    std::cin >> numIntervals;
     
    // call the pi_approx function
    PiResults results = pi_approx(numIntervals);

    // output
    std::cout << "Approximated value of pi: " << results.approx << std::endl;
    std::cout << "Absolute error: " << results.error << std::endl;

    return 0;
}

