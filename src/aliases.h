//
// Created by Hasan on 25/11/19.
//

#ifndef LAB2_IMPLEMENTATION_ALIASES_H
#define LAB2_IMPLEMENTATION_ALIASES_H

#include <vector>

/**
 * Vector2d serves as a placeholder for writing a custom 2d Vector class.
 * However, a custom class could useful if things like operator overloading was required.
 */
template <typename T>
using Vector2d = std::vector<std::vector<T>>;

#endif //LAB2_IMPLEMENTATION_ALIASES_H
