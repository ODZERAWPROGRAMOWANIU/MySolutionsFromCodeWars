#include <string>
using namespace std;
std::string add(const std::string &a, const std::string &b)
{
    string a1 = a;
    string b1 = b;
    if (a1.length() > b1.length())
    {
        int diff = a1.length() - b1.length();
        for (int i = 0; i < diff; i++)
        {
            b1 = ('0' + b1);
        }
    }
    if (a1.length() < b1.length())
    {
        int diff = b1.length() - a1.length();
        for (int i = 0; i < diff; i++)
        {
            a1 = ('0' + a1);
        }
    }
    int sum = 0;
    string result = "";
    int len = max(a1.length(), b1.length());
    for (int i = len - 1; i >= 0; i--)
    {
        sum = (a1[i] - 48) + (b1[i] - 48) + sum;
        result = char((sum % 10) + 48) + result;
        sum /= 10;
    }
    if (sum == 1)
    {
        result = '1' + result;
    }
    return result;
}