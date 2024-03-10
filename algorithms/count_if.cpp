#include <algorithm>
#include <vector>
#include <iostream>
#include "utils.hpp"

int main()
{
    std::vector<int> v{1, 2, 3, 3, 3, 3, 4, 5, 5, 6, 7, 8};
    std::cout << "List: ";
    println(v);

    auto isEven = [](int a)
    { return a % 2 == 0; };

    std::cout << "Number of even Nos: " << std::count_if(v.begin(), v.end(), isEven) << "\n";
    return 0;
}