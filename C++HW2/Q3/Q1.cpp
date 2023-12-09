#include <iostream>
#include "q1.h"
#include <cmath>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

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
    double absoluteError = std::fabs(M_PI - piApprox);

    PiResults results;
    results.approx = piApprox;
    results.error = absoluteError;
    return results;
}
