#include <iostream>
#include <random>
#include <vector>
using namespace std;
int rnd_n() {
  random_device rd;
  mt19937 gen(rd());
  uniform_int_distribution<int> dist(-50, 50);

  // Генерируем случайное число
  int random_number = dist(gen);
  return random_number;
}
int main(){
  int a = 0, b = 0, k=0, minA=0, SumV=0;
  bool r_meth = true;
  std::cout << "Enter a, A[a][b]: "; std::cin >> a;
  std::cout << "Enter b, A[a][b]: "; std::cin >> b;
  vector <int> SumVector(a);
  int** array{new int*[a]};
  for (size_t i = 0; i < a; i++) {
    array[i] = new int[b];
    for (size_t j = 0; j < b; j++) {
      if (r_meth) {
        array[i][j] = rnd_n();
      } else {
        array[i][j] = rand() % 101 - 50;
      }
      std::cout << array[i][j] << " ";
    }
    std::cout << '\n';
  }
  std::cout << '\n';
  for (size_t i = 0; i < a; i++) {
    minA = 100;
    SumV = 0;
    for (size_t j = 0; j < b; j++) {
      if (array[i][j] < minA) {
        k = 1;
        minA = array[i][j];
      } else if (array[i][j] > minA) {
        k = 1;
      } else {
        k += 1;
      }
    }
    for (size_t j = 0; j < b; j++) {
      if (array[i][j] > minA) {
        SumV += array[i][j];
      }
    }
    SumVector.at(i) = SumV;
  }
  for (size_t i = 0; i < a; i++) {
    std::cout << SumVector.at(i) << '\n';
  }
  for (unsigned i{}; i < a; i++)
    {
        delete[] array[i];
    }
    delete[] array;
    return 0;
}
