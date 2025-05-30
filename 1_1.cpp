#include <cmath>
#include <iostream>
using namespace std;
class Equation {
  private:
     double y;
     int x;
     bool Area;
  public:
    void yeqn() {
      double log3 = log(3)/log(pow(3, tan(2*x))+2);
      double cos6 = cos(pow(abs(x), 1/6));
      double aicos = pow(acos(cos6/(pow(cos6, 2)+5)), 3/2);
      y = aicos + log3;
    }
    void IsArea() {
      yeqn();
      Area = (0 <= y and y <= 5 and 0 <= x and x <= 4);
    }
    Equation(int xeq) {
      x = xeq;
      IsArea();
    }
    bool InArea() {
      return Area;
    }
    double getY() {
      return y;
    }
    int getX() {
      return x;
    }
};

int main() {
  int x = 0;
  std::cout << "Enter x: "; std::cin >> x;
  Equation nvm(x);
  std::cout << "A(x,y), where x="<< nvm.getX() << " and y=" << nvm.getY() << " locates " << (nvm.InArea() ? "in" : "out of") <<" D-area" << '\n';
  return 0;
}
