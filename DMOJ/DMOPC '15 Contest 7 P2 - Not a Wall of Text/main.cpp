#include <cstdio>
#include <cstring>

int main()
{
  char a[100]{};
  fgets(a, 100, stdin);

  int s{};

  int c{};
  while(c < strlen(a))
  {
    if(a[c] == ' ')
      ++s;
    ++c;
  }

  printf("%d\n", s + 1);

  return 0;
}

