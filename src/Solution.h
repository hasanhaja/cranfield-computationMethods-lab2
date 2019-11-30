//
// Created by Hasan on 27/11/19.
//

#ifndef LAB2_IMPLEMENTATION_SOLUTION_H
#define LAB2_IMPLEMENTATION_SOLUTION_H


#include <vector>
#include "SchemeType.h"
#include "Scheme.h"

class Solution {
private:
    std::vector<double> times, grids;
    SchemeType scheme_t;
    Scheme scheme;
    void _set_scheme();

public:
    Solution();
    Solution(std::vector<double> times, std::vector<double> grids, SchemeType scheme_type);
    void set_scheme(SchemeType scheme_t);
};


#endif //LAB2_IMPLEMENTATION_SOLUTION_H
