#include <algorithm>
#include <vector>
#include <iostream>
#include "utils.hpp"

int main()
{
    std::vector<int> v(20);

    std::cout << "Original Vector of size 20: ";
    println(v);

    std::fill(v.begin(), v.end(), -1);

    std::cout << "After filled with -1s: ";
    println(v);

    return 0;
}