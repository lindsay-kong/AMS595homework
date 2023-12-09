#ifndef Q1_H
#define Q1_H

struct PiResults {
    double approx;
    double error;
};

double calculateF(double x);
PiResults pi_approx(int N);

#endif