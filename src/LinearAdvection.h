//
// Created by Hasan on 25/11/19.
//

#ifndef LAB2_IMPLEMENTATION_LINEARADVECTION_H
#define LAB2_IMPLEMENTATION_LINEARADVECTION_H

#include "aliases.h"

class LinearAdvection {
private:
    std::pair<int, int> space_domain;
    int alpha;
    double t, x, delta_t, delta_x;

    // Would have to merge this vector with the result vector during the upwind scheme.
    Vector2d<double> initial_condition;

public:
    LinearAdvection();
    LinearAdvection(int alpha, std::pair<int, int> space_domain, double t, double x, double delta_t, double delta_x);
    Vector2d<double> next();
    Vector2d<double> upwind();
};


#endif //LAB2_IMPLEMENTATION_LINEARADVECTION_H
