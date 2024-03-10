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
    std::copy(v1.begin(), v1.end(), std::back_inserter(v2));

    std::cout << "copied vector: ";
    println(v2);

    return 0;
}