#include <vector>
using namespace std;
bool ifNumberIsPrime(int number)
{
    if (number < 2)
    {
        return 2;
    }
    for (int i = 2; i * i <= number; i++)
    {
        if (number % i == 0)
        {
            return false;
        }
    }
    return true;
}
std::vector<unsigned> prime(unsigned n)
{
    vector<unsigned int> result;
    for (int i = 2; i <= n; i++)
    {
        if (ifNumberIsPrime(i))
        {
            result.push_back(i);
        }
    }
    return result;
}