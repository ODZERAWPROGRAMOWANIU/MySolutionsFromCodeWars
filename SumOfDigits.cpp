using namespace std;
int digital_root(int n)
{
  string temp = to_string(n);
  int result = 0;
  while (temp.length() > 1)
  {
    result = 0;
    for (int i = 0; i < temp.length(); i++)
    {
      result += temp[i] - 48;
    }
    temp = "";
    temp = to_string(result);
  }
  return result;
}
