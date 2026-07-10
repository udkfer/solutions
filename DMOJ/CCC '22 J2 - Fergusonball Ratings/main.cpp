#include <iostream>

int main()
{
  int n{};
  std::cin >> n;

  int count{};
  for(int i{}; i < n; ++i)
  {
    int points{}, fouls{};
    std::cin >> points >> fouls;

    int rating = (points * 5) - (fouls *3);

    if(rating > 40)
      ++count;

  }

  if(count == n)
    std::cout << count << "+\n";
  else
    std::cout << count << '\n';

  return 0;
}
