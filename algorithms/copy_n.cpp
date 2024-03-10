#include <algorithm>
#include <vector>
#include <iostream>
#include "utils.hpp"

int main()
{
    std::vector<int> v1{1, 2, 3, 4, 5};
    std::cout << "original vector: ";
    println(v1);

    std::vector<int> v2;
    // copy the first 3 elems
    std::copy_n(v1.begin(), 3, std::back_inserter(v2));

    std::cout << "copied vector (only first 3 nos): ";
    println(v2);

    return 0;
}