#include <string>
using namespace std;

string rot13(string msg)
{
    string result = "";
    for (int i = 0; i < msg.length(); i++)
    {
        if (isupper(msg[i]))
        {
            result += (msg[i] - 'A' + 13) % 26 + 'A';
        }
        else if (islower(msg[i]))
        {
            result += (msg[i] - 'a' + 13) % 26 + 'a';
        }
        else
        {
            result += msg[i];
        }
    }
    return result;
}