#include <iostream>

int main()
{
  double weight{}, height{};
  std::cin >> weight >> height;

  double bmi = (weight / (height * height));

  if(bmi > 25)
  std::cout << "Overweight\n";
  else if(bmi < 18.5)
  std::cout << "Underweight\n";
  else
  std::cout << "Normal weight\n";

  return 0;
}
