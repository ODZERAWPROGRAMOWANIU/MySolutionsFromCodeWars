#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;
bool ifIsogram(string text)
{
  set<char> lettersToCompare;
  for (int i = 0; i < text.length(); i++)
  {
    text[i] = tolower(text[i]);
    lettersToCompare.insert(text[i]);
  }
  if (text.length() == lettersToCompare.size())
  {
    return true;
  }
  else
  {
    return false;
  }
}
int main()
{
  string text = "isIsogram";
  if (ifIsogram(text))
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }
  return 0;
}