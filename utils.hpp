#include <vector>
#include <iostream>

using namespace std;

void println(vector<int> &v)
{
    for (auto count{v.size()}; auto elem : v)
    {
        cout << elem << (--count ? ", " : "\n");
    }
}