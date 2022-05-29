#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;
int sumOfDifferences(vector<int> arr)
{
  int result = 0;
  sort(arr.begin(), arr.end(), greater<int>());
  if (arr.empty() || arr.size() == 1)
  {
    return 0;
  }
  else
  {
    for (int i = 0; i < arr.size() - 1; i++)
    {
      int temp = arr[i] - arr[i + 1];
      result += temp;
    }
  }
  return result;
}
