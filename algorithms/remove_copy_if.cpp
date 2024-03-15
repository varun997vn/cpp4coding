#include <algorithm>
#include <string>
#include <iostream>

int main()
{
    std::string str{"Hi Varun, this is Varun. This is a sample sentence with spaces."};
    std::string cpystr;
    std::cout << "Original String: " << str << "\n";

    auto isSpace = [](char c)
    { return c == ' '; };

    std::remove_copy_if(str.begin(), str.end(), std::back_inserter(cpystr), isSpace);
    std::cout << "String after removing spaces: " << cpystr << "\n";

    return 0;
}