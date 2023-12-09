#include <iostream>
#include <cmath>
#include "q2.h"

PiResults* approximations(const std::vector<int>& intervals) {
    PiResults* resultsArray = new PiResults[intervals.size()];

    for (size_t i = 0; i < intervals.size(); ++i) {
        resultsArray[i] = pi_approx(intervals[i]);
    }

    return resultsArray;
}
