#include <iostream>
#include <string>

bool isPalindrome(std::string s) {
  int left{};
  int right = s.length() - 1;

  while (left < right) {
    if (s[left] != s[right])
      return false;

    left++;
    right--;
  }

  return true;
}

int main()
{
  std::string word{};
  std::cin >> word;

  isPalindrome(word);

  int maxLen = 1;

  for (int i{}; i < word.length(); i++) {
    for (int j = i; j < word.length(); j++) {
      std::string sub = word.substr(i, j - i + 1);

      if (isPalindrome(sub) && sub.length() > maxLen) {
        maxLen = sub.length();

      }
    }
  }

  std::cout << maxLen << '\n';

  return 0;
}
