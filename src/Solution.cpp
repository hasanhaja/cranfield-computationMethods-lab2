//
// Created by Hasan on 27/11/19.
//

#include "Solution.h"

Solution::Solution() {

}

Solution::Solution(std::vector<double> times, std::vector<double> grids, SchemeType scheme_t) {
    this->times = times;
    this->grids = grids;
    this->scheme_t = scheme_t;
}
void Solution::set_scheme(SchemeType scheme_t) {
    this->scheme_t = scheme_t;
}

void Solution::_set_scheme() {
    switch (scheme_t) {
        case SchemeType::Upwind :
            // TODO
            break;
        case SchemeType::Central :
            // TODO
            break;
        case SchemeType::Lax :
            // TODO
            break;
        case SchemeType::Leapfrog :
            // TODO
            break;
    }
}
