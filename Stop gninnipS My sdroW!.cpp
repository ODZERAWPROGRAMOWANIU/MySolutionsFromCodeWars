#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;
std::string spinWords(const std::string &str)
{
  vector<string> words;
  string word;
  stringstream temp(str);
  while (temp >> word)
  {
    words.push_back(word);
  }
  word = "";
  for (int i = 0; i < words.size(); i++)
  {
    if (words[i].size() >= 5)
    {
      reverse(words[i].begin(), words[i].end());
    }
    if (words.size() > 1)
    {
      word += words[i];
      word += ' ';
    }
    else
    {
      word += words[i];
    }
  }
  if (word[word.length() - 1] == ' ')
  {
    word.pop_back();
  }
  return word;
} 
