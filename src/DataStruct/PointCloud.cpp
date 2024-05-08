#include "PointCloud.h"

namespace rec {
PointCloud::PointCloud(): m_points_count(0) {}

PointCloud::PointCloud(size_t resize_size): m_vec(resize_size * 3), m_nor(resize_size * 3), m_colors(resize_size * 4), m_quality(resize_size), m_points_count(resize_size) {}

bool PointCloud::ReadPly(std::string const &file_name) {
  


  
}

}