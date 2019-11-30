//
// Created by Hasan on 25/11/19.
//

#include "LinearAdvection.h"

/**
 * The initialization of this class should initialize the boundary and initial conditions.
 */
LinearAdvection::LinearAdvection() {
    // TODO
}

/**
 * TODO: Simplify this constructor and reduce the number of parameters.
 * @param alpha
 * @param space_domain
 * @param t
 * @param x
 * @param delta_t
 * @param delta_x
 */
LinearAdvection::LinearAdvection(int alpha, std::pair<int, int> space_domain, double t, double x, double delta_t,
                                 double delta_x) {
    // TODO
    // Can you have a vector<vector> with gaps? Obviously you can mutate the values, but can elements be uninitialized?
    // I think it will insert default values.
    /**
     * eg
     * [0               1]
     * [0               1]
     */
    for (int i = 0; i < 10; i++) {
        for (int n = 0; n < 10; n++) {
//            initial_condition
        }
    }
}

/**
 * This could be useful when trying to implement an iterator pattern
 * @return
 */
Vector2d<double> LinearAdvection::next() {
    // TODO
    return Vector2d<double>();
}

Vector2d<double> LinearAdvection::upwind() {
    // This will have to be the size of the grid
    Vector2d<double> result;

    /**
     * Fix the range for the for loops to account for the size of the grid.
     */
    for (int i = 0; i < 10; i++) {
        for (int n = 0; n < 10; n++) {
            double &result_prev = result[i][n];
            double &result_back = result[i - 1][n];
            result[i][n + 1] = result_prev - alpha * (delta_t / delta_x)*(result_prev - result_back);
        }
    }

    return result;
}

