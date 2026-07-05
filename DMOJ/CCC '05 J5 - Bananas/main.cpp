#include <iostream>
#include <string>

bool isWord(std::string s);

bool isAWord(const std::string& s) {
  if (s == "A") return true;
  if (s.size() >= 3 && s.front() == 'B' && s.back() == 'S') {
    return isWord(s.substr(1, s.size() - 2));
  }
  return false;
}

bool isWord(std::string s) {
  for (size_t i = 1; i <= s.size(); ++i) {
    if (isAWord(s.substr(0, i))) {
      if (i == s.size()) return true;
      if (s[i] == 'N' && isWord(s.substr(i + 1))) return true;
    }
  }
  return false;
}

int main() {
  std::string word;
  while (std::cin >> word && word != "X") {
    std::cout << (isWord(word) ? "YES\n" : "NO\n");
  }
}
