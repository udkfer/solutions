#include <cstdio>

int main()
{
  int n{}, r{};
  scanf("%d", &n);

  char a[10000];

  int i{0};
  while(i < n)
  {
    scanf(" %c", &a[i]);
    ++i;
  }

  int j{0};
  while(j < n)
  {
    char b{};
    scanf(" %c", &b);

    if(a[j] == b)
      ++r;
    ++j;
  }

  printf("%d\n", r);

  return 0;
}
