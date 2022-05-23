#include <vector>
#include <algorithm>
using namespace std;
int missingNo(vector<int> &arr)
{
  sort(arr.begin(), arr.end());
  int result = 0;
  for (int i = 0; i < arr.size(); i++)
  {
    if (arr[i] - i != 1)
    {
      result = arr[i] + 1;
    }
  }
  return result;
  return 0;
}
