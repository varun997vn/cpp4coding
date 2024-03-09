#include <algorithm>
#include <vector>
#include <iostream>
#include "utils.hpp"

using namespace std;

int main()
{
    vector<int> v{5, 10, 15, 20, 23, 30, 35, 40};
    cout << "Numbers: ";
    println(v);

    auto isDivBy5 = [](auto elem)
    { return elem % 5 == 0; };

    auto notDivByFive = find_if_not(v.cbegin(), v.cend(), isDivBy5);
    bool found = notDivByFive != v.cend();
    cout << "Found: " << found << "\n";
    if (found)
        cout << "First Number not divisible by 5: " << (*notDivByFive) << "\n";

    return 0;
}