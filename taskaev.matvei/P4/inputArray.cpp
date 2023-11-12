#include "inputArray.hpp"

size_t readArray::inputArray(std::istream & in, int * m, size_t s, size_t toRead)
{
  for (size_t i = 0; i < std::min(toRead, s); ++i)
  {
    if (!(in >> m[i]))
    {
      return i;
    }
  }
  return std::min(toRead, s);
}
