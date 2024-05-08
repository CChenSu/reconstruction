#pragma once

namespace rec {

struct PointXYZ {
  float x;
  float y;
  float z;
};

struct Normal {
  float nx;
  float ny;
  float nz;
};

struct Vertex {
  float x;
  float y;
  float z;
  float nx;
  float ny;
  float nz;
};

struct VertexWithColor {
  float x;
  float y;
  float z;
  float nx;
  float ny;
  float nz;
  unsigned char red;
  unsigned char green;
  unsigned char blue;
  unsigned char alpha;
};

struct VertexWithColorQuality {
  float x;
  float y;
  float z;
  float nx;
  float ny;
  float nz;
  float q;
  unsigned char red;
  unsigned char green;
  unsigned char blue;
  unsigned char alpha;
};


struct Color
{
  unsigned char red;
  unsigned char green;
  unsigned char blue;
  unsigned char alpha;
};

using VertexC = VertexWithColor;
using VertexCQ = VertexWithColorQuality;
using Point = PointXYZ;

}