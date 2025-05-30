#include <cmath>
#include <iostream>
using namespace std;

int main() {
  int x = 0;
  double y = 1.0;
  std::cout << "Enter x: "; std::cin >> x;
  if (x<=-3) {
    y = atan(sqrt(abs(x))) + 3;
  } else if (-3<x<3){
    y = cos((pow(x,5)+2*x)/(3+pow(x,2)));
  } else if (x>=3) {
    y = pow(x,4) + pow(3,-x)*pow(x,x-5);
  }
  std::cout << "y(x) = " << y << '\n';
  return 0;
}
