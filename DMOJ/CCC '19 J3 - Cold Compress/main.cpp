#include <iostream>
#include <string>

int main()
{
  int n{};
  std::cin >> n;

  int loop_counter{};
  while(loop_counter < n)
  {
    std::string sequence{};
    std::cin >> sequence;

    int count{1};
    for(int i{}; i < (sequence.length() - 1); ++i)
    {
      if(sequence[i] == sequence[i + 1])
        ++count;
      else
      {
        std::cout << count << ' ' << sequence[i] << ' ';
        count = 1;
      }
    }

    std::cout << count << ' ' << sequence.back() << ' ';
    std::cout << '\n';

    ++loop_counter;
  }

  return 0;
}
