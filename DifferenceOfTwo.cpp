#include <utility>
#include <vector>
#include <algorithm>
using namespace std;
std::vector<std::pair<int, int>> twos_difference(const std::vector<int> &vec) 
{
    vector <int> vec1 (vec);
    sort (vec1.begin (), vec1.end ());
    pair <int, int> temp;
    vector <pair <int, int> > result;
    for (auto it : vec1)
      {
      for (auto it1 : vec1)
        {
          if (it-it1==2)
            {
              temp.first = it1;
              temp.second = it;
              result.push_back (temp);
            }
        }
    }
  return result;
}