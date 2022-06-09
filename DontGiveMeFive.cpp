using namespace std;
int dontGiveMeFive(int start, int end)
{
    int result = 0;
    for (int i = start; i <= end; i++)
    {
        if (to_string(i).find_first_of('5') == string::npos)
        {
            result++;
        }
    }
    return result;
}