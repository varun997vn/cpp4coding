#include <algorithm>
#include <vector>
#include <iostream>
#include "utils.hpp"

int main()
{
    std::vector v{43, 23, 53, 21, 4, 32, 55, 32, 90};
    std::vector g{77, 64, 37, 199, 88, 32, 84, 3, 30};

    std::cout << "Search Numbers: ";
    println(v);

    std::cout << "Candidate Numbers: ";
    println(g);

    auto firstCandate = std::find_first_of(v.cbegin(), v.cend(), g.cbegin(), g.cend());
    bool found = firstCandate != v.cend();
    std::cout << "Is Found: " << found << "\n";

    if (found)
    {
        std::cout << "First Candidate Number Found: " << *firstCandate << "\n";
        std::cout << "Position of the number in Search Numbers: " << std::distance(v.cbegin(), firstCandate) << "\n";
    }

    return 0;
}