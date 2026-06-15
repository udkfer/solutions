#include <iostream>

int main()
{
  int ammount[10] = {100, 500, 1000, 5000, 10000, 25000, 50000, 100000, 500000, 1000000};
  int total = ammount[0] + ammount[1] + ammount[2] + ammount[3] + ammount[4] + ammount[5] + ammount[6] + ammount[7] + ammount[8] + ammount[9]; 

  int n{};
  std::cin >> n;

  for(int i{}; i < n; ++i)
  {
    int value_out;
    std::cin >> value_out;

    int index_value = value_out - 1;
    int value_pool = ammount[index_value];

    total -= value_pool;

  }

  int offer{};
  std::cin >> offer;

  int average = total / (10 - n);  

  if(offer > average)
    std::cout << "deal\n";
  else
    std::cout << "no deal\n";

  return 0;
}
