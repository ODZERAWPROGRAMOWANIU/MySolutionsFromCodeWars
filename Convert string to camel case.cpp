#include <string>
using namespace std;
std::string to_camel_case(std::string text)
{
  for (unsigned int i = 0; i < text.length(); i++)
  {
    if (text[i] == '-' || text[i] == '_')
    {
      text.erase(i, 1);
      text[i] = toupper(text[i]);
    }
  }
  return text;
}
