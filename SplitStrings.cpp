#include <string>
#include <vector>
using namespace std;
std::vector<std::string> solution(const std::string &s)
{
    vector<string> result;
    for (int i = 0; i < s.length(); i++)
    {
        string temp = "";
        if (i == s.length() - 1 && s.length() % 2 == 0)
        {
            break;
        }
        if (i == s.length() - 1 && s.length() % 2 != 0)
        {
            temp += s[i];
            temp += '_';
            result.push_back(temp);
            break;
        }
        temp += s[i];
        temp += s[i + 1];
        result.push_back(temp);
        i++;
    }
    return result;
}