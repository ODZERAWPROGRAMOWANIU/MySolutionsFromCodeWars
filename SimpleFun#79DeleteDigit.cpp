using namespace std;
int deleteDigit(int n)
{
    int max = 0;
    string temp = to_string(n);
    for (int i = 0; i < temp.length(); i++)
    {
        string temp1 = temp;
        temp1.erase(i, 1);
        int t = stoi(temp1);
        if (max < t)
        {
            max = t;
        }
    }
    return max;
}