#ifndef MATH_MESH_HPP_DEFINED
#define MATH_MESH_HPP_DEFINED

#include <string>

namespace utymap { namespace math {

/// Represents mesh which uses only primitive types to store data due to interoperability.
struct Mesh final
{
    std::string name;
    std::vector<double> vertices;
    std::vector<int> triangles;
    std::vector<int> colors;

    std::vector<double> uvs;
    std::vector<int> uvMap;

    explicit Mesh(const std::string& name) : name(name)
    {
        vertices.reserve(512);
        triangles.reserve(512);
        colors.reserve(512);
        uvs.reserve(512);
        uvMap.reserve(8);
    }

    /// Disable copying to prevent accidental copy
    Mesh(const Mesh&) = delete;
    Mesh& operator=(const Mesh&) = delete;

    /// Clear geometry. Name stays.
    void clear()
    {
        vertices.clear();
        triangles.clear();
        colors.clear();
        uvs.clear();
        uvMap.clear();
    }
};

}}
#endif //MATH_MESH_HPP_DEFINED
