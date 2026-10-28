#include <iostream>
#include <string>
#include <iomanip>

bool isRush(int t)
{
  if(t >= 420 && t < 600)
    return true;
  if(t >= 900 && t < 1140)
    return true;
  return false;
}

int main()
{
  std::string s{};
  std::cin >> s;

  int HH = stoi(s.substr(0,2));
  int MM = stoi(s.substr(3,2));

  int now = HH*60 + MM;

  int remaining = 240;

  while (remaining > 0)
  {
    if(isRush(now % 1440))
    {
      remaining -= 1;
    }
    else
    {
      remaining -= 2;
    }
    now++;
  }

  now = now % 1440;
  HH = now / 60;
  MM = now % 60;

  std::cout << std::setw(2) << std::setfill('0') << HH << ":" << std::setw(2) << std::setfill('0') << MM;

  return 0;
}
