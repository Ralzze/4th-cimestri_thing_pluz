#include <iostream>
#include <random>
using namespace std;
int rnd_n() {
  // Создаем генератор случайных чисел
  std::random_device rd;  // Источник энтропии
  std::mt19937 gen(rd()); // Генератор случайных чисел
  std::uniform_int_distribution<int> dist(-50, 50); // Диапазон от -50 до 50

  // Генерируем случайное число
  int random_number = dist(gen);
  return random_number;
}
int main(){
  int a = 0, b = 0, n= 0, sum=0;
  bool r_meth = true;
  std::cout << "Enter a, A[a][b]: "; std::cin >> a;
  std::cout << "Enter b, A[a][b]: "; std::cin >> b;
  std::cout << "Enter number N: "; std::cin >> n;
  int** array{new int*[a]};
  for (int i = 0; i < a; i++) {
    array[i] = new int[b];
    for (int j = 0; j < b; j++) {
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
  for (int i = 0; i < a; i++) {
    for (int j = 0; j < b; j++) {
      if ((i%3==0 and i/3>=1) or (j%3==0 and j/3>=1) or array[i][j]>n){
        sum+=array[i][j];
        std::cout <<"(" << array[i][j] << ") ";
      }else{
        std::cout << array[i][j] << " ";
      }
    }
    std::cout << '\n';
  }

  std::cout << "Sum of Elements: " << sum << '\n';
  return 0;
  for (int i{}; i < a; i++)
    {
        delete[] array[i];
    }
    delete[] array;
}
