#include <iostream>
using namespace std;

int main()
{
  int a1, a2, a3, total;
  double rata_rata;

  cout << "Masukkan bilangan 1: ";
  cin >> a1;
  cout << "Masukkan bilangan 2: ";
  cin >> a2;
  cout << "Masukkan bilangan 3: ";
  cin >> a3;

  total = a1 + a2 + a3;
  rata_rata = total / 3.0;

  cout << "Bilangan 1 = " << a1 << endl;
  cout << "Bilangan 2 = " << a2 << endl;
  cout << "Bilangan 3 = " << a3 << endl;
  cout << "Total = " << total << endl;
  cout << "Rata-rata = " << rata_rata << endl;

  return 0;
}