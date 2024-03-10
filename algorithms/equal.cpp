#include <algorithm>
#include <vector>
#include <iostream>
#include "utils.hpp"

int main()
{
    std::vector<int> v1{1, 2, 3, 4, 5, 6, 7};
    std::vector<int> v2{1, 2, 3, 4, 5, 6, 7};
    std::vector<int> v3{1, 2, 3, 4, 5, 8};

    std::cout << "Vector v1: ";
    println(v1);
    std::cout << "Vector v2: ";
    println(v2);
    std::cout << "Vector v3: ";
    println(v3);

    std::cout << "v1 is equal to v2: " << std::equal(v1.begin(), v1.end(), v2.begin(), v2.end()) << "\n";
    std::cout << "v1 is equal to v3: " << std::equal(v2.begin(), v2.end(), v3.begin(), v3.end()) << "\n";

    return 0;
}