#include <iostream>
#include <iterator>
#include <string>
#include <vector>

namespace w2l {

template <typename T>
std::ostream& operator<<(std::ostream& os, std::vector<T> vec) {
  // os << "{";
  std::copy(vec.begin(), vec.end(), std::ostream_iterator<T>(os, "_"));
  // os << "}";
  return os;
}

}
