#pragma once

#include <iostream>
#include <iterator>
#include <string>
#include <vector>

// namespace w2l {

template <typename T>
std::ostream& operator<<(std::ostream& os, std::vector<T> vec);
// }
void printVec(const std::vector<std::string> &valList);
