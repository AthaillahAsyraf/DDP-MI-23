#include <iostream>
using namespace std;

int main()
{
  int a1, b2, c3, total;
  double rata_rata;

  cout << "Masukkan bilangan 1: ";
  cin >> a1;
  cout << "Masukkan bilangan 2: ";
  cin >> b2;
  cout << "Masukkan bilangan 3: ";
  cin >> c3;

  total = a1 + b2 + c3;
  rata_rata = total / 3.0;

  cout << "Bilangan 1 = " << a1 << endl;
  cout << "Bilangan 2 = " << b2 << endl;
  cout << "Bilangan 3 = " << c3 << endl;
  cout << "Total = " << total << endl;
  cout << "rata-rata = " << rata_rata << endl;

  return 0;
}