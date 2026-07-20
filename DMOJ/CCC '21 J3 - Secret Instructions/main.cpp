#include <iostream>

int main()
{
  int n{};
  std::string previous_turn{};

  while(true)
  {
    std::cin >> n;
    switch(n)
    {
      case 99999:
        return 0;
      default:
        {
          int first_two_sum = ((n / 1000) / 10) + ((n / 1000) % 10) ;
          int last_tree = n % 1000;

          if(first_two_sum == 0)
            std::cout << previous_turn << last_tree << '\n';
          else if((first_two_sum % 2) == 0)
          {
            std::cout << "right " << last_tree << '\n';
            previous_turn = "right ";
          }
          else
          {
            std::cout << "left " << last_tree << '\n';
            previous_turn = "left ";
          }
        }
    }

  }
  return 0;
}
