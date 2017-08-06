#ifndef MODEL_HPP
#define MODEL_HPP

#include <chrono>

using namespace std::chrono;

typedef high_resolution_clock::time_point time_p;

string operator+(const string& lhs, const time_p& rhs) {
    auto rhsTimeT = high_resolution_clock::to_time_t(rhs);
    return lhs + string(ctime(&rhsTimeT));
}

string operator+(const time_p& lhs, const string& rhs) {
    auto lhsTimeT = high_resolution_clock::to_time_t(lhs);
    return string(ctime(&lhsTimeT)) + rhs;
}

#include "log.hpp"

#include "model/Person.cpp"

#endif