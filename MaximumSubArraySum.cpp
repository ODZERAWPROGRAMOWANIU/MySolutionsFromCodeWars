#include <vector>
using namespace std;
int maxSequence(const std::vector<int> &arr)
{
    if (arr.empty())
        return 0;
    int currSum = 0, maxSum = arr[0];
    for (auto it : arr)
    {
        currSum += it;
        if (it > currSum)
        {
            currSum = it;
        }
        currSum = max(currSum, 0);
        maxSum = max(maxSum, currSum);
    }
    return maxSum;
}