#include <vector>
using namespace std;
std::vector<int> move_zeroes(const std::vector<int> &input)
{
    vector<int> number(input);
    size_t beforeDel = number.size();
    number.erase(remove(number.begin(), number.end(), 0), number.end());
    size_t zerosToAdd = beforeDel - number.size();
    for (int i = 1; i <= zerosToAdd; i++)
    {
        number.push_back(0);
    }
    return number;
}