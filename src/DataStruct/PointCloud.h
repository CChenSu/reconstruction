#pragma once
#include "BaseDataStruct.h"
#include "Points.h"
#include <vector>
#include <memory>

namespace rec {
  class PointCloud: public BaseDataStruct {

  public:
    PointCloud();
    PointCloud(size_t resize_size);
    ~PointCloud() = default;

  public:
    void Resize(size_t size);

    void Reserve(size_t size);

    VertexCQ GetVertex(size_t idx);

    Point& PointXYZ(size_t idx);
    const Point& PointXYZ(size_t idx) const;

    Normal& NormalXYZ(size_t idx);
    const Normal& NormalXYZ(size_t idx) const;

    Color& RGBA(size_t idx);
    const Color& RGBA(size_t idx) const;
    
    float& x(size_t idx);
    float& y(size_t idx);
    float& z(size_t idx);

    float& nx(size_t idx);
    float& ny(size_t idx);
    float& nz(size_t idx);

    float& q(size_t idx);

    float& r(size_t idx);
    float& g(size_t idx);
    float& b(size_t idx);
    float& alpha(size_t idx);

    const float& x(size_t idx) const;
    const float& y(size_t idx) const;
    const float& z(size_t idx) const;

    const float& nx(size_t idx) const;
    const float& ny(size_t idx) const;
    const float& nz(size_t idx) const;

    const float& q(size_t idx) const;

    const float& r(size_t idx) const;
    const float& g(size_t idx) const;
    const float& b(size_t idx) const;
    const float& alpha(size_t idx) const;

    size_t Count() const noexcept;

    
  public:
    bool ReadPly(std::string const &file_name) noexcept;

    bool WritePly(std::string const &file_name, bool is_binary = false) noexcept;

  private:
    struct PlyHeader {
      bool is_binary = false;
      // TODO
    };

  private:
    std::vector<float> m_vec;
    std::vector<float> m_nor;
    std::vector<unsigned char> m_colors;
    std::vector<float> m_quality;
    size_t m_points_count;
  };
}