
#include <iostream>
#include <iterator>
#include <string>
#include <vector>

template <typename T>
std::ostream& operator<<(std::ostream& os, std::vector<T> vec);
