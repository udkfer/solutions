#include <iostream>
#include <vector>

int main()
{
  int n{}, m{};
  std::cin >> n >> m;

  std::vector<int> a(n);

  for(int i{}; i < n; ++i)
  {
    std::cin >> a[i];
  }

  for (int person{}; person < m; ++person)
  {
    int min_index{};
    for(int i = 1; i < n; ++i)
      if(a[i] < a[min_index])
        min_index = i;

    std::cout << a[min_index] << '\n'; 

    ++a[min_index];
  }


  return 0;
}
