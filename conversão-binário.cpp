#include <iostream>
#include <bitset>
using namespace std;

int main() {
   int n;

  cout << "digite um número inteiro: ";
  cin >> n;
  
  bitset<8> bits(n);
  
  cout << "o valor binário é: " << bits << endl;
  
  return 0;
}
