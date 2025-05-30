#include <iostream>
#include <string>
int main() {
  int a = 0, b = 0;
  std::cin >> a;
  b = a%10 + a/100 + a%100/10;
  std::cout << a%10 << a%100/10 << a/100 << '\n';
  return 0;
}
