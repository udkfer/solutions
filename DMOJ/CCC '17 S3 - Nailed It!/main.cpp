#include <iostream>
#include <algorithm>

int maxPairs(int h, const int freq[])
{
  int pairs{};
  for (int v = 1; v <= h / 2; ++v)
  {
    int partner = h - v;
    if(partner > 2000)
      continue;
    else if(v == partner)
      pairs += freq[v] / 2;
    else
      pairs += std::min(freq[v], freq[partner]);
  }
  return pairs;
}

int main()
{
  int n{};
  std::cin >> n;

  int freq[2001]{};
  for(int i{}; i < n; ++i)
  {
    int l{};
    std::cin >> l;
    ++freq[l];
  }

  int best{};
  int count{};
  for (int h = 2; h <= 4000; ++h)
  {
    int p = maxPairs(h, freq);
    if(p > best)
    {
      best = p;
      count = 1;
    }
    else if(p == best && p > 0)
      count = count + 1;
  }

  std::cout << best << " " << count << '\n';

  return 0;
}
