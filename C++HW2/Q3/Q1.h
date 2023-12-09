#ifndef Q1_H
#define Q1_H


//structure to store the results of pi approximation
struct PiResults {
    double approx;
    double error;
};

double calculateF(double x);
PiResults pi_approx(int N);

// Q1_H
#endif