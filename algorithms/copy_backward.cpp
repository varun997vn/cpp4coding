#include <algorithm>
#include <vector>
#include <iostream>
#include "utils.hpp"

int main()
{
    std::vector<int> v1{1, 2, 3, 4, 5};
    std::cout << "original vector: ";
    println(v1);

    std::vector<int> v2(10);
    // copy the first 3 elems
    std::copy_backward(v1.begin(), v1.end(), v2.end());

    std::cout << "copied vector backward: ";
    println(v2);

    return 0;
}