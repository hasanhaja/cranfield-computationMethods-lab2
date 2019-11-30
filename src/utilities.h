//
// Created by Hasan on 25/11/19.
//

#ifndef LAB2_IMPLEMENTATION_UTILITIES_H
#define LAB2_IMPLEMENTATION_UTILITIES_H

#include <string>
#include "aliases.h"
#include <optional>

namespace util::file {
    void write(const std::string& filename, const Vector2d<double>& results);
    Vector2d<double> read(const std::string& filename);
}
namespace util::math {
    double sign(double n);
}

#endif //LAB2_IMPLEMENTATION_UTILITIES_H
