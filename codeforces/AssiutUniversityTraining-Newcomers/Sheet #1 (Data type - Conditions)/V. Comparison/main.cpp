#include <iostream>

int main()
{
 int a{}, b{};
 char s{};
 std::cin >> a >> s >> b;

 switch(s)
 {
   case '>':
     if(a > b)
       std::cout << "Right" << '\n';
     else
       std::cout << "Wrong" << '\n';

     break;
   case '<':
     if(a < b)
       std::cout << "Right" << '\n';
     else
       std::cout << "Wrong" << '\n';
     break;
   case '=':
     if(a == b)
       std::cout << "Right" << '\n';
     else
       std::cout << "Wrong" << '\n';
     break;
 }

  return 0;
}
