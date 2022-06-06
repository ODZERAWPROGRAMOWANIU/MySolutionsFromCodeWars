#include <algorithm>
#include <vector>
using namespace std;
class Kata
{
public:
    std::vector<int> sortArray(std::vector<int> array)
    {
        vector<int> oddNumbers;
        for (int j = 0; j < array.size(); j++)
        {
            if (array[j] % 2 != 0)
            {
                oddNumbers.push_back(array[j]);
            }
        }
        sort(oddNumbers.begin(), oddNumbers.end());
        for (int i = 0, j = 0; i < array.size(); i++)
        {
            if (array[i] % 2 != 0)
            {
                array[i] = oddNumbers[j++];
            }
        }
        return array;
    }
};