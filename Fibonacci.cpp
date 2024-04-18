#include <iostream>
using namespace std;

int main() {
  int N;
  int a = 1, b = 1, c;

  cout << "Digite o número de termos desejados (N) na sequência de Fibonacci: ";
  cin >> N;

  cout << "Sequência de Fibonacci com " << N << " termos:" << endl;
  cout << a << endl << b << endl;

  for (int i = 2; i < N; i++) {
    c = a + b;
    cout << c << " " << endl;
    a = b;
    b = c;
  }

  return 0;
}