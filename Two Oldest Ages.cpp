#include <vector>
#include <array>
#include <algorithm>
#include <iterator>
using namespace std;
std::array<int, 2> two_oldest_ages(std::vector<int> ages)
{
  sort(ages.begin(), ages.end());
  auto it = ages.end();
  auto theSecondOldest = prev(it, 2);
  array<int, 2> result;
  result[0] = *theSecondOldest;
  result[1] = ages.back();
  return {result};
}
