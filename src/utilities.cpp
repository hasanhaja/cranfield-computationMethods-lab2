//
// Created by Hasan on 28/11/19.
//

#include <fstream>
#include "utilities.h"

namespace util::file {
    // anonymous namespace
    namespace {
        void write_vec_to_file(const std::string& filename, const std::vector<double>& row) {
            std::ofstream file;
            file.open(filename, std::ofstream::app);

            for (auto e : row) {
                file << e << " ";
            }
            file << std::endl;
            file.close();
        }

        void read_line_to_vec(const std::string& filename) {
            // TODO
        }
    }
    /**
     * NOTE: Does it really make sense to open and close for every insert?
     * Is that efficient? How expensive are fileio?
     * Would it be better to write all of it at once? How could you buffer that?
     */
    void write(const std::string& filename, const Vector2d<double>& results) {
        for (const auto& row : results) {
            write_vec_to_file(filename, row);
        }
    }

    Vector2d<double> read(const std::string& filename) {
        return Vector2d<double>();
    }
}
namespace util::math {
    double sign(double n) {
        return n > 0 ? 1.0 : -1.0;
    }
}

