#include <iostream>
#include <string>

std::string shiftOnce(std::string s)
{
  return s.substr(1) + s[0];
}

int main()
{

  std::string T, S;
  std::getline(std::cin, T);
  std::getline(std::cin, S);

  bool found = false;
  std::string cand = S;
  for (int i{}; i < S.length(); i++) {
    if (T.find(cand) != std::string::npos) { found = true; break; }
    cand = shiftOnce(cand);
  }
  std::cout << (found ? "yes" : "no") << "\n";

  return 0;
}
