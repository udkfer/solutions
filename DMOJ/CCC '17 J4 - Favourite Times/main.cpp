#include <iostream>
#include <vector>

bool isFavourite(int hour, int minute)
{
  std::vector<int> digits{};

  if (hour >= 10)
  {
    digits.push_back(hour / 10);
    digits.push_back(hour % 10);
  }
  else
  {
    digits.push_back(hour);
  }
  digits.push_back(minute / 10);
  digits.push_back(minute % 10);

  int diff = digits[1] - digits[0];
  for (size_t i = 2; i < digits.size(); ++i)
  {
    if (digits[i] - digits[i-1] != diff)
      return false;
  }
  return true;
}

int main()
{
  int d{};
  std::cin >> d;

  int hour = 12;
  int minute{};
  int cycles = d / 720;
  int rem = d % 720;
  int count = cycles * 31;

  for (int i{}; i < rem; ++i)
  {
    minute++;
    if (minute == 60)
    {
      minute = 0;
      if (hour == 11)
        hour = 12;
      else if (hour == 12)
        hour = 1;
      else
        hour++;
    }

    if (isFavourite(hour, minute))
      count++;
  }

  std::cout << count;

  return 0;
}
