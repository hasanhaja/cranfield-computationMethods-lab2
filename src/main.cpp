#include <iostream>
#include "aliases.h"
#include "utilities.h"

int main() {

    std::vector<double> a = {1.0, 2.0, 3.0, 4.0};
    std::vector<double> b = {11.0, 12.0, 13.0, 14.0};
    std::vector<double> c = {21.0, 22.0, 23.0, 24.0};

    Vector2d<double> sample = {a, b, c};

    std::string filename = "test.txt";

    util::file::write(filename, sample);

    return 0;
}