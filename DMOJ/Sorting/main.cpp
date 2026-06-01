#include <iostream>
#include <vector>

int main()
{
  int n{};
  std::cin >> n;

  std::vector<int> v{};
  int i{};

  int l{};
  while(l < n)
  {
    std::cin >> i;
    v.push_back(i);

    ++l;
  }

  int sl{};
  while(sl < n)
  {
    int j{};
    int k{};
    while(k < (n - 1))
    {
      if(v[k] > v[k + 1])
      {
        j = v[k];
        v[k] = v[k + 1];
        v[k+1] = j;
      }
      ++k;
    }
    ++sl;
  }

  int m{};
  while(m < n)
  {
    std::cout << v[m] << '\n';
    ++m;
  }

  return 0;
}
