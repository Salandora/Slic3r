#ifndef slic3r_IO_hpp_
#define slic3r_IO_hpp_

#include "libslic3r.h"
#include "Model.hpp"
#include "TriangleMesh.hpp"
#include <string>

namespace Slic3r { namespace IO {

class STL
{
    public:
    static bool read(std::string input_file, Model* model);
    static bool write(TriangleMesh& mesh, std::string output_file, bool binary = true);
};

class OBJ
{
    public:
    static bool write(TriangleMesh& mesh, std::string output_file);
};

class POV
{
    public:
    static bool write(TriangleMesh& mesh, std::string output_file);
};

} }

#endif
