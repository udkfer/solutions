#include <iostream>

int main()
{
  int cents{};
  std::cin >> cents;

  if (cents > 1) {
    std::cout << cents << " cents requires ";
  } else {
    std::cout << cents << " cent requires ";
  }

  int quarter = cents / 25;
  if(quarter > 0)
  {
    cents = cents % 25; 

    switch(quarter)
    {
      case 1:
        std::cout << quarter << " quarter";
        if (cents > 0) {
          std::cout << ", ";
        } else {
          std::cout << ".\n";
        }
        break;
      default:
        std::cout << quarter << " quarters";
        if (cents > 0) {
          std::cout << ", ";
        } else {
          std::cout << ".\n";
        }
    }
  }

  int dime = cents / 10;
  if(dime > 0)
  {
    cents = cents % 10; 

    switch(dime)
    {
      case 1:
        std::cout << dime << " dime";
        if (cents > 0) {
          std::cout << ", ";
        } else {
          std::cout << ".\n";
        }
        break;
      default:
        std::cout << dime << " dimes";
        if (cents > 0) {
          std::cout << ", ";
        } else {
          std::cout << ".\n";
        }
    }
  }

  int nickel = cents / 5;
  if(nickel > 0)
  {
    cents = cents % 5; 

    switch(nickel)
    {
      case 1:
        std::cout << nickel << " nickel";
        if (cents > 0) {
          std::cout << ", ";
        } else {
          std::cout << ".\n";
        }
        break;
      default:
        std::cout << nickel << " nickels";
        if (cents > 0) {
          std::cout << ", ";
        } else {
          std::cout << ".\n";
        }
    }
  }

  if(cents > 0)
  {
    switch(cents)
    {
      case 1:
        std::cout << cents << " cent.\n";
        break;
      default:
        std::cout << cents << " cents.\n";
    }
  }


  return 0;
}
