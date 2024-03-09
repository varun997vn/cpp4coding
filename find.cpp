#include <algorithm>
#include <vector>
#include <iostream>
#include "utils.hpp"

using namespace std;

int main()
{
    vector<int> v{1, 2, 3, 4, 5, 6, 7, 8};
    cout << "Numbers: ";
    println(v);

    auto five = find(v.cbegin(), v.cend(), 5);
    bool found = five != v.cend();
    cout << "Found: " << found << "\n";
    if (found)
        cout << "Five is at pos: " << std::distance(v.cbegin(), five) << "\n";

    return 0;
}