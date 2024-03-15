#include <algorithm>
#include <string>
#include <iostream>

int main()
{
    std::string str{"Hi Varun, this is Varun. This is a sample sentence with spaces."};
    std::cout << "Original String: " << str << "\n";

    auto isWhiteSpace = [](char c)
    { return c == ' '; };

    str.erase(std::remove_if(str.begin(), str.end(), isWhiteSpace), str.end());
    std::cout << "String after removing spaces: " << str << "\n";

    return 0;
}