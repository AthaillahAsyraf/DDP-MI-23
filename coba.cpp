#include <iostream>

using namespace std;

int main()
{

  float a, b;
  cin >> a >> b;

  float penjumlahan = a + b;
  float perkalian = a * b;
  float perkurangan = a - b;
  float pembagian = a / b;

  cout << "Penjumlahan dari " << a << " dan " << b << " adalah " << penjumlahan << endl;
  cout << "Perkalian dari " << a << " dan " << b << " adalah " << perkalian << endl;
  cout << "Perkurangan dari " << a << " dan " << b << " adalah " << perkurangan << endl;
  cout << "Pembagian dari " << a << " dan " << b << " adalah " << pembagian << endl;
}