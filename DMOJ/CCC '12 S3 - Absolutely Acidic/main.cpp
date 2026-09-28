#include <iostream>
#include <algorithm>

int main()
{
  int n{};
  std::cin >> n;

  int freq[1001]{};
  for(int i{}; i < n; ++i)
  {
    int reading{};
    std::cin >> reading;
    ++freq[reading];
  }

  int maxFreq{};
  int maxCount{};
  int maxLo{};
  int maxHi{};

  for(int i = 1; i <= 1000; ++i)
  {
    if(freq[i] > maxFreq)
      maxFreq = freq[i];
  }

  for(int i = 1; i <= 1000; ++i)
  {
    if(freq[i] == maxFreq)
    {
      ++maxCount;
      if (maxCount == 1)
        maxLo = i;
      maxHi = i;
    }
  }

  int secondFreq{};
  int secLo{};
  int secHi{};

  for(int i = 1; i <= 1000; ++i)
  {
    if(freq[i] < maxFreq && freq[i] > secondFreq)
      secondFreq = freq[i];
  }

  for(int i = 1; i <= 1000; ++i)
  {
    if(freq[i] == secondFreq)
    {
      if (secLo == 0)
        secLo = i;
      secHi = i;
    }
  }

  int answer{};
  if(maxCount >= 2)
    answer = maxHi - maxLo;
  else if(maxCount == 1)
    answer = std::max(maxLo - secLo, secHi - maxLo);

  std::cout << answer << '\n';

  return 0;
}
