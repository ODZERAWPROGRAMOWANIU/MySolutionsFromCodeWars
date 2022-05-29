#include <string>
using namespace std;
std::string createPhoneNumber(const int arr[10])
{
  string result = "";
  result += '(';
  result += to_string(arr[0]) + to_string(arr[1]) + to_string(arr[2]) + ')' + ' ';
  result += to_string(arr[3]) + to_string(arr[4]) + to_string(arr[5]) + '-';
  result += to_string(arr[6]) + to_string(arr[7]) + to_string(arr[8]) + to_string(arr[9]);
  return result;
}
