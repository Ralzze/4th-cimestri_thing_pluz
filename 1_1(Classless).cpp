#include <cmath>
#include <iostream>
using namespace std;
int main() {
  int x = 0;
  double y;
  std::cout << "Enter x: "; std::cin >> x;

  double log3 = log(3)/log(pow(3, tan(2*x))+2);
  double cos6 = cos(pow(abs(x), 1/6));
  double aicos = pow(acos(cos6/(pow(cos6, 2)+5)), 3/2);
  y = aicos + log3;
  std::cout << "A(x,y), where x="<< x << " and y=" << y << " locates " << ((0 <= y and y <= 5 and 0 <= x and x <= 4) ? "in" : "out of") <<" D-area" << '\n';
  return 0;
}
