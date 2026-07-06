#include <iostream>

int main()
{
  int n{};
  std::cin >> n;

  std::string winner{};
  int highestBid;

  for(int i{}; i < n; ++i)
  {
    std::string name{};
    int bid;

    std::cin >> name >> bid;

    if(bid > highestBid)
    {
      highestBid = bid;
      winner = name;
    }
  }

  std::cout << winner << '\n';

  return 0;
}
