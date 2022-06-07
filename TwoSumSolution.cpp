using namespace std;
std::pair<std::size_t, std::size_t> two_sum(const std::vector<int> &numbers, int target)
{
    pair<size_t, size_t> result;
    for (int j = 0; j < numbers.size(); j++)
    {
        for (int m = 1; m < numbers.size(); m++)
        {
            if (numbers[j] + numbers[m] == target)
            {
                result.first = j;
                result.second = m;
                return result;
            }
        }
    }
}