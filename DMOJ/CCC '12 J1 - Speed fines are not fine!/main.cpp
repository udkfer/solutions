#include <iostream>

int main()
{
  int l{}, s{};
  std::cin >> l >> s;


  int f = (s - l);

  if(f <= 0)
    std::cout << "Congratulations, you are within the speed limit!\n";
  else
  {
  if (f <= 20)
    f = 100;
  else if ((f >= 21) && (f <= 30))
    f = 270;
  else if (f >= 31)
    f = 500;
  }

    switch(f)
    {
      case 100:
        std::cout << "You are speeding and your fine is $100.";
        break;
      case 270:
        std::cout << "You are speeding and your fine is $270.\n";
        break;
      case 500:
        std::cout << "You are speeding and your fine is $500.\n";
        break;
    }

  return 0;
}
