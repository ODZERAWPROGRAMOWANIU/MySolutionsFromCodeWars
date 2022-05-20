#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int find(vector<int> &numbers)
{
  int result = 0;
  int temp = 0;
  sort(numbers.begin(), numbers.end());
  for (int i = 0; i < numbers.size(); i++)
  {
    for (int j = 0; j < numbers.size(); j++)
    {
      if (numbers[i] != numbers[j])
      {
        temp++;
      }
      if (temp == numbers.size() - 1)
      {
        result = numbers[i];
      }
    }
    temp = 0;
  }
  return result;
}

int main()
{
  vector<int> numbers = {1, 1, 2};
  cout << find(numbers) << endl;
  return 0;
}