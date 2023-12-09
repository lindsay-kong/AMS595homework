#include <iostream>
#include <cmath>
//include the header file for function declarations
#include "q2.h"

//function to approximate pi
PiResults* approximations(const std::vector<int>& intervals) {
    PiResults* resultsArray = new PiResults[intervals.size()];

    for (size_t i = 0; i < intervals.size(); ++i) {
        resultsArray[i] = pi_approx(intervals[i]);
    }

    return resultsArray;
}
