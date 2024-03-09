#include <algorithm>
#include <vector>
#include <iostream>
#include "utils.hpp"

int main()
{
    std::vector<int> v{12, 14, -34, 23, 67};
    std::cout << "before: ";
    println(v);

    auto multiply2 = [](auto &e)
    { e *= 2; };
    for_each_n(v.begin(), 3, multiply2); // only apply to the first 3 elems

    std::cout << "after: ";
    println(v);
    return 0;
}