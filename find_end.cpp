#include <algorithm>
#include <vector>
#include <iostream>
#include "utils.hpp"

using namespace std;

int main()
{
    vector<int> v{1, 2, 5, 6, 7, 3, 4, 5, 6, 7, 8};
    vector<int> g{6, 7, 8};
    cout << "Numbers: ";
    println(v);

    // find last occurence of g within v
    auto findSeq = find_end(v.cbegin(), v.cend(), g.begin(), g.end());
    bool found = findSeq != v.cend();
    cout << "Found: " << found << "\n";
    if (found)
        cout << "Sequence found at pos: " << distance(v.cbegin(), findSeq) << "\n";

    return 0;
}