#include <iostream>
#include <string>
#include <algorithm>

int main()
{
  std::string characters{};
  std::cin >> characters;

  int nL{}, nM{}, nS{};

  for(int i{}; i < characters.size(); ++i)
  {
    switch(characters[i])
    {
      case 'L':
        ++nL;
        break;
      case 'M':
        ++nM;
        break;
      case 'S':
        ++nS;
        break;
    }
  }

  int M_in_L{}, S_in_L{}, L_in_M{}, S_in_M{}, L_in_S{}, M_in_S{};

  for (int i{}; i < characters.size(); ++i) 
  {
    if (i < nL)
    {
      if (characters[i] == 'M')
        ++M_in_L;
      else if (characters[i] == 'S')
        ++S_in_L;
    }
    else if (i < nL + nM)
    {
      if (characters[i] == 'L')
        ++L_in_M;
      else if (characters[i] == 'S')
        ++S_in_M;
    }
    else 
    {
      if (characters[i] == 'L')
        ++L_in_S;
      else if (characters[i] == 'M')
        ++M_in_S;
    }
  }

  int direct_LM = std::min(M_in_L, L_in_M);
  int direct_LS = std::min(S_in_L, L_in_S);
  int direct_MS = std::min(S_in_M, M_in_S);

  int total = M_in_L + S_in_L + L_in_M + S_in_M + L_in_S + M_in_S;
  int direct = direct_LM + direct_LS + direct_MS;
  int remaining = total - 2 * direct;
  int answer = direct + 2 * (remaining / 3);

  std::cout << answer << '\n';

  return 0;
}
