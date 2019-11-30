//
// Created by Hasan on 27/11/19.
//

#ifndef LAB2_IMPLEMENTATION_SCHEME_H
#define LAB2_IMPLEMENTATION_SCHEME_H

/**
 * This should be an abstract class that the various schemes inherit from.
 * TODO: How to use virtual? How to create abstract classes?
 */
class Scheme {
private:
    //std::pair<int, int> space_domain;
    int alpha;
    double t, x, delta_t, delta_x;
public:
    //Scheme();
    //virtual void compute();
};


#endif //LAB2_IMPLEMENTATION_SCHEME_H
