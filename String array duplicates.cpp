std::vector<std::string> dup(std::vector<std::string> arr)
{
  for (auto &it : arr)
  {
    it.erase(unique(it.begin(), it.end()), it.end());
  }
  return arr;
}
