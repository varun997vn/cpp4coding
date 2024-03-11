#include <algorithm>
#include <vector>
#include <iostream>
#include "utils.hpp"

int main()
{
    std::vector<int> v1{1, 2, 3, 4, 5, 6};
    std::vector<int> v2;

    std::cout << "Original vector: ";
    println(v1);

    std::replace_copy(v1.begin(), v1.end(), std::back_inserter(v2), 3, 5);
    std::cout << "Copied vector after replacing 3 with 5: ";
    println(v2);

    return 0;
}