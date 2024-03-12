#include <algorithm>
#include <vector>
#include <iostream>
#include "utils.hpp"

int main()
{

    auto getNextFactorial = [n = 0, prev = 1]() mutable
    {
        if (n == 0)
        {
            n = 1;
            prev = 1;
            return 1;
        }
        prev = prev * n;
        n++;
        return prev;
    };

    std::vector<int> factorials;
    std::cout << "Factorial array before initialization: ";
    println(factorials);

    std::generate_n(std::back_inserter(factorials), 10, getNextFactorial);
    std::cout << "Factorial array after initialization: ";
    println(factorials);

    return 0;
}