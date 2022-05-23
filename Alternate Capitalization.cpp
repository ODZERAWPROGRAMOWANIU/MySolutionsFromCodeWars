#include <string>
#include <utility>
using namespace std;
std::pair<std::string, std::string> capitalize(const std::string &s)
{
  string upperEven = s, upperOdd = s;
  for (int i = 0; i < s.length(); i = i + 2)
  {
    upperEven[i] = toupper(upperEven[i]);
  }
  for (int i = 1; i < s.length(); i = i + 2)
  {
    upperOdd[i] = toupper(upperOdd[i]);
  }
  return {upperEven, upperOdd};
}
