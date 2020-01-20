#include <iostream>
#include <iterator>
#include <string>
#include <vector>
#include <algorithm>

// namespace w2l {

template <typename T>
std::ostream& operator<<(std::ostream& os, std::vector<T> vec) {
  // os << "{";
  std::copy(vec.begin(), vec.end(), std::ostream_iterator<T>(os, "_"));
  // os << "}";
  return os;
}

// }
template <typename T>
void printer(const T &val)
{
  std::cout << val << std::endl;
}

void printVec(const std::vector<std::string> &valList)
{
  std::for_each(valList.cbegin(), valList.cend(), printer<std::string>);
}
