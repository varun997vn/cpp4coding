#include <algorithm>
#include <vector>
#include <iostream>
#include "utils.hpp"

int main()
{
    std::vector<int> v1{1, 2, 3, 4, 5, 6, 7, 8};
    std::vector<int> v2{1, 2, 3, 9, 5, 6, 7, 8};

    auto mismatch = std::mismatch(v1.begin(), v1.end(), v2.begin(), v2.end());
    std::cout << "Vector v1: ";
    println(v1);
    std::cout << "Vector v2: ";
    println(v2);

    std::cout << "First Mismatch at v1, position: " << std::distance(v1.begin(), mismatch.first) << " , value: " << *mismatch.first << "\n";
    std::cout << "First Mismatch at v2, position: " << std::distance(v2.begin(), mismatch.second) << " , value: " << *mismatch.second << "\n";

    return 0;
}