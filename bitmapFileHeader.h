#ifndef BITMAPFILEHEADER_H_
#define BITMAPFILEHEADER_H_

// to use exactly 32 bit int
#include <cstdint>

// only 2 byte padding
#pragma pack(2)

struct BitmapFileHeader
{
  char header[2]{'B', 'M'};  
  int32_t fileSize;
  int32_t reserved{0};
  int32_t dataOffset;
};

#endif
