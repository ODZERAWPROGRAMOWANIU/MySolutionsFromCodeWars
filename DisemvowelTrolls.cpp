#include <string>
#include <algorithm>
using namespace std;

std::string disemvowel(const std::string &str)
{
    string temp = str;
    for (auto lettersToDel : "AaEeIiOoUu")
    {
        temp.erase(remove(temp.begin(), temp.end(), lettersToDel), temp.end());
    }
    return temp;
}