#include <algorithm>
#include <vector>
#include <iostream>
#include "utils.hpp"

int main()
{
    std::vector<int> v1{1, 2, 3, 4, 5};
    std::cout << "original vector: ";
    println(v1);

    auto even = [](int a)
    { return a % 2 == 0; };

    std::vector<int> v2;
    std::copy_if(v1.begin(), v1.end(), std::back_inserter(v2), even);

    std::cout << "copied vector (only even nos): ";
    println(v2);

    return 0;
}