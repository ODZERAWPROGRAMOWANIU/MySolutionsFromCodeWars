#include <vector>
using namespace std;
std::vector<int> between(int start, int end)
{
  vector<int> result;
  for (int i = start; i <= end; i++)
  {
    result.push_back(i);
  }
  return result;
}
