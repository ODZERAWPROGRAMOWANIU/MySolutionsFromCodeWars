#include <string>
using namespace std;
std::string encrypt(std::string text, int rule)
{
    for (int i = 0; i < text.length(); i++)
    {
        text[i] += (int)rule;
    }
    return text;
};