// Note: std::move in algorithm library is not same as std::move in utilities library
// This moves the elements from one range ot another and the elements in moved_from need not remain same after move.
// This is similar to copy but more efficient in large datastructures.

#include <algorithm>
#include <vector>
#include <iostream>
#include "utils.hpp"

int main()
{
    std::vector<int> v1{1, 2, 3, 4, 5, 6};
    std::vector<int> v2(12);

    std::cout << "Moved From vector: ";
    println(v1);

    std::cout << "Perform Move\n";
    std::move_backward(v1.begin(), v1.end(), v2.end());

    std::cout << "Moved From Vector: ";
    println(v1);

    std::cout << "Moved to Vector: ";
    println(v2);

    return 0;
}