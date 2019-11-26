//
// Created by Hasan on 25/11/19.
//

#ifndef LAB2_IMPLEMENTATION_UTILITIES_H
#define LAB2_IMPLEMENTATION_UTILITIES_H

#include <string>
#include "aliases.h"
#include <optional>

namespace util::file {
    std::optional<void> write(std::string filename, Vector2d<double> results);
    std::optional<Vector2d<double>> read(std::string filename);
}
namespace util::math {
    double sign(double n) {
        return n > 0 ? 1.0 : -1.0;
    }
}

#endif //LAB2_IMPLEMENTATION_UTILITIES_H
