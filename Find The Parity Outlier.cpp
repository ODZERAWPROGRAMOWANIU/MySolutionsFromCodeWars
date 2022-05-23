int FindOutlier(std::vector<int> arr)
{
  int numOfOdds = 0, numOfPrimes = 0;
  int result = 0;
  for (auto it : arr)
  {
    if (it % 2 == 0)
    {
      numOfPrimes++;
    }
    else
    {
      numOfOdds++;
    }
  }
  if (numOfPrimes > numOfOdds)
  {
    for (int i = 0; i < arr.size(); i++)
    {
      if (arr[i] % 2 != 0)
      {
        result = arr[i];
      }
    }
  }
  else
  {
    for (int i = 0; i < arr.size(); i++)
    {
      if (arr[i] % 2 == 0)
      {
        result = arr[i];
      }
    }
  }
  return result;
}
